//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    void inorder(vector<int>&A,int i,int n,vector<int>&in)
    {
        if(i >= n)
        {
            return;
        }
        
        inorder(A,2*i+1,n,in);
        in.push_back(A[i]);
        inorder(A,2*i+2,n,in);
    }
    int minSwaps(vector<int>&nums)
	{
	    vector<pair<int,int>>arr;
	    
	    for(int i=0;i<nums.size();i++)
	    {
	        arr.push_back({nums[i],i});
	    }
	    
	    sort(arr.begin(),arr.end());
	    vector<int>vis(arr.size(),false);
	    int ans=0;
	    
	    for(int i=0;i<nums.size();i++)
	    {
	        if(arr[i].first != nums[i])
	        {
	            int j=i;
	            int len=0;
	            
	            if(vis[j] == 0)
	            {
    	            while(vis[j] == 0)
    	            {
    	                len++;
    	                vis[j]=1;
    	                j=arr[j].second;
    	            }
	            }
	            
	            if(len > 0)
	            {
	                ans+=len-1;
	            }
	        }
	    }
	    return ans;
	}
  public:
    int minSwaps(vector<int>&A, int n){
       vector<int>in;
       
       inorder(A,0,n,in);
       
       return minSwaps(in);
    }
    
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>A(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> A[i];
	    }
	    Solution ob;
	    int ans = ob.minSwaps(A, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
