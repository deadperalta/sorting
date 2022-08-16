// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        sort(arr,arr+n);
        string a="";
        string b="";
        for(int i=0;i<n;i++)
        {
           if(i%2){
                b += (arr[i] +'0');
            }else{
                a += (arr[i] + '0');
            }
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        n = a.length();
        int m = b.length();
        int carry=0;
        string ans="";
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            int x=(a[i]-'0')+(b[j]-'0')+carry;
            carry=x/10;
            if(x==0)
            {
                break;
            }
            ans+=to_string(x%10);
            i++;
            j++;
        }
        while(i<n)
        {
            int x=(a[i]-'0')+carry;
            carry=x/10;
            if(x==0)
            {
                break;
            }
            ans+=to_string(x%10);
            i++;
        }
        while(j<m)
        {
            int x=(b[j]-'0')+carry;
            carry=x/10;
            if(x==0)
            {
                break;
            }
            ans+=to_string(x%10);
            j++;
        }
        if(carry>0)
        {
            ans+=to_string(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
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
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
