//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    long long int merge(long long int arr[],long long int low,long long int mid,long long int high)
    {
        vector<long long int>temp;
        
        long long int left=low;
        long long int right=mid+1;
        
        long long int count=0;
        
        while(left <= mid && right <= high)
        {
            if(arr[left] > arr[right])
            {
                count+=(high-right+1);
                temp.push_back(arr[left++]);
            }
            else
            {
                temp.push_back(arr[right++]);
            }
        }
        while(left <= mid)
        {
            temp.push_back(arr[left++]);
        }
        while(right <= high)
        {
            temp.push_back(arr[right++]);
        }
        
        for(long long int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
        return count;
        
    }
    long long int mergeSort(long long int arr[],long long int low,long long int high)
    {
        long long int count=0;
        if(low < high)
        {
            long long int mid=low+((high-low)>>1);
            
            count+=mergeSort(arr,low,mid);
            count+=mergeSort(arr,mid+1,high);
            count+=merge(arr,low,mid,high);
        }
        return count;
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
