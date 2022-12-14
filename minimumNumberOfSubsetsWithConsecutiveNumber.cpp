//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        sort(arr,arr+n);
        
        int count=0;
        int prev=arr[0];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i] == prev+1)
            {
                prev=arr[i];
            }
            else
            {
                count++;
                prev=arr[i];
            }
        }
        count++;
        
        return count;
    }
};

//{ Driver Code Starts.
// Driven Program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        Solution ob;
	    cout << ob.numofsubset(arr, n) << endl;
	}
	return 0;
}

// } Driver Code Ends
