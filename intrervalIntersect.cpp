bool doesIntersect(vector<pair<int,int>>a&interval)
{
  sort(interval.begin(),interval.end());
  
  for(int i=0;i<interval.size()-1;i++)
  {
    if(interval[i+1].first < interval[i].second)
    {
      return true;
    }
  }
  return false;
}
