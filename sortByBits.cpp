//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
    int countBits(int n)
    {
        int count=0;
        
        while(n)
        {
            if(n & 1)
            {
                count++;
            }
            n>>=1;
        }
        return count;
    }
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        vector<pair<int,int>>bitsAndInd;
        
        for(int i=0;i<n;i++)
        {
            int bits=countBits(arr[i]);
            bitsAndInd.push_back({bits,i});
        }
        
        sort(bitsAndInd.begin(),bitsAndInd.end(),comp);
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[i]=arr[bitsAndInd[i].second];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=ans[i];
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
