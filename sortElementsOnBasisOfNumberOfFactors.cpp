static bool comp(pair<int,int>&a,pair<int,int>&b)
{
  if(a.first == b.first)
  {
    return a.second < b.second;
  }
  return a.first > b.first;
}
int number(int a)
{
  int count=0;
  int sq=sqrt(a);
  
  if(sq*sq == a)
  {
    count++;
  }
  
  for(int i=1;i<sqrt(n);i++)
  {
    if(a % i == 0)
    {
      count+=2;
    }
  }
  return count;
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
