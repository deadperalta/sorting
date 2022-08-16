int maxDiff(vector<int>&arr)
{
  unordered_map<int,int>freq;
  vector<int>dist;
  
  for(int i=0;i<arr.size();i++)
  {
    if(freq.find(arr[i]) == freq.end())
    {
      dist.push_back(arr[i]);
    }
    freq[arr[i]]++;
  }
  
  sort(dist.begin(),dist.end());
  
  int minFreq=arr.size()+1;
  int ans=0;
  
  for(int i=0;i<dist.size();i++)
  {
    int currFreq=freq[dist[j]];
    ans=max(ans,currFreq-minFreq);
    minFreq=min(minFreq,currFreq);
  }
  return ans;
}
