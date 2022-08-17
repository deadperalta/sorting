int minDiff(vector<int>&arr,int k)
{
  int ans=INT_MAX;
  sort(arr.begin(),arr.end());
  for(int i=K-1;i<N;i++)
  {
    ans=min(ans,arr[i]-arr[i-k+1]);
  }
  return ans;
}
