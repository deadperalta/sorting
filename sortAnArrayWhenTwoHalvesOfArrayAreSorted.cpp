//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    void merge(int arr[],int i,int j,int n)
    {
        int temp[n];
        
        int k=0;
        int left=i;
        int right=j;
        
        while(left < j && right < n)
        {
            if(arr[left] < arr[right])
            {
                temp[k++]=arr[left++];
            }
            else
            {
                temp[k++]=arr[right++];
            }
        }
        
        while(left < j)
        {
            temp[k++]=arr[left++];
        }
        while(right < n)
        {
            temp[k++]=arr[right++];
        }
        
        for(int ind=i;ind<n;ind++)
        {
            arr[ind]=temp[ind];
        }
    }
    public:
        void sortHalves (int arr[], int n)
        {
            int i=0;
            
            for(;i<n-1;i++)
            {
                if(arr[i+1] < arr[i])
                {
                    i++;
                    break;
                }
            }
            
            merge(arr,0,i,n);
            
        }
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
		int arr[n];

		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        
        Solution ob;
        
		ob.sortHalves (arr, n);
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends
