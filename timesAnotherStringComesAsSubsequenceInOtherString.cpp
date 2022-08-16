//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    long long int mod=1e9+7;
    int solve(int i,int j,string &s,string &t,vector<vector<int>>&dp )
    {
        if(j == t.size())
        {
            return 1;
        }
        if(i == s.size())
        {
            return 0;
        }
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        if(s[i] == t[j])
        {
            int take=solve(i+1,j+1,s,t,dp);
            int skip=solve(i+1,j,s,t,dp);
            
            return dp[i][j]=(take+skip)%mod;
        }
        
        int skip=solve(i+1,j,s,t,dp);
        return dp[i][j]=skip%mod;
    }
    public:
    int subsequenceCount(string S, string T)
    {
        int n=S.size();
        int m=T.size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return solve(0,0,S,T,dp)%mod;
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends
