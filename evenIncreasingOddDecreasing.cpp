//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
		vector<int>even;
		vector<int>odd;
		
		for(int i=0;i<n;i++)
		{
		    if(i % 2 == 0)
		    {
		        even.push_back(arr[i]);
		    }
		    else
		    {
		        odd.push_back(arr[i]);
		    }
		}
		
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end(),greater<int>());
		
		int i=0;
		
		while(i < even.size())
		{
		    arr[i]=even[i];
		    i++;
		}
		
		int j=0;
		while(j < odd.size())
		{
		    arr[i]=odd[j];
		    j++;
		    i++;
		}
	}
		 

};

//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];


        

        Solution ob;
        ob.bitonicGenerator(arr, n);
        
        for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
