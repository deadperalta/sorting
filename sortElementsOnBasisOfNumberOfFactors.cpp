static bool comp(pair<int,int>&a,pair<int,int>&b)
{
  if(a.first == b.first)
  {
    return a.second < b.second;
  }
  return a.first > b.first;
}

void sortOnFactors(vector<int>&arr)
{
  vector<pair<int,int>>facts;
  
  for(int i=0;i<arr.size();i++)
  {
    int f=number(arr[i]);
    facts.push_back({f,i});
  }
  
  sort(facts.begin(),facts.end(),comp);
  
  vector<int>ans;
  
  for(int i=0;i<facts.size();i++)
  {
    ans.push_back(arr[facts[i].second);
  }
  for(int i=0;i<arr.size();i++)
  {
      arr[i]=ans[i];
  }
}
