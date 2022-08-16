//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	
	
	public:
	int getIndexInSortedArray(int arr[], int n, int idx)
	{
	    int pos=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(i < idx)
	        {
	            if(arr[i] <= arr[idx])
	            {
	                pos++;
	            }
	        }
	        else
	        {
	            if(arr[i] < arr[idx])
	            {
	                pos++;
	            }
	        }
	    }
	    
	    return pos;
	}
		 

};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i)
        	cin>>a[i];


        
        Solution ob;
        cout << ob.getIndexInSortedArray(a,n,k);
        
	    cout << "\n";
	     
    }
    return 0;
}




// } Driver Code Ends
