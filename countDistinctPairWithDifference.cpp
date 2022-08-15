//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    bool found(int val,vector<int>&nums,int low)
    {
        int high=nums.size()-1;
        
        while(low <= high)
        {
            int mid=low+((high-low)>>1);
            
            if(nums[mid] == val)
            {
                return true;
            }
            
            if(nums[mid] > val)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return false;
    }
	public:
	int TotalPairs(vector<int>nums, int k){
	    sort(nums.begin(),nums.end());
	    
	    set<pair<int,int>>st;
	    
	    for(int i=0;i<nums.size()-1;i++)
	    {
	        if(found(nums[i]+k,nums,i+1))
	        {
	            st.insert({nums[i],nums[i]+k});
	        }
	    }
	    return st.size();
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
