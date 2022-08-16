//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
    void merge(int i,int mid,int j,vector<pair<int,int>>&temp,vector<int>&ans)
    {
        vector<pair<int,int>>arr;
        
        int count=0;
        
        int left=i;
        int right=mid+1;
        
        while(left <= mid && right <= j)
        {
            if(temp[left].first <= temp[right].first)
            {
                arr.push_back(temp[right]);
                right++;
            }
            else
            {
                ans[temp[left].second]+=(j-right+1);
                arr.push_back(temp[left]);
                left++;
            }
        }
        while(left <= mid)
        {
            arr.push_back(temp[left]);
            left++;
        }
        while(right <= j)
        {
            arr.push_back(temp[right]);
            right++;
        }
        
        for(int k=0;k<arr.size();k++)
        {
            temp[k+i]=arr[k];
        }
        
    }
    void mergeSort(int i,int j,vector<pair<int,int>>&temp,vector<int>&ans)
    {
        if(i < j)
        {
            int mid=i+((j-i)>>1);
            
            mergeSort(i,mid,temp,ans);
            mergeSort(mid+1,j,temp,ans);
            merge(i,mid,j,temp,ans);
        }
        return;
    }
public:
    vector<int> findSurpasser(int arr[], int n) {
        vector<pair<int,int>>temp;
        
        for(int i=0;i<n;i++)
        {
            temp.push_back({arr[i],i});
        }
        
        vector<int>ans(temp.size());
        
        mergeSort(0,temp.size()-1,temp,ans);
        
        for(int i=0;i<n;i++)
        {
            ans[i]=(n-1-i-ans[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findSurpasser(arr, n);
        for (auto i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


// } Driver Code Ends
