int minDiff(vector<int>choco,int m)
{
  sort(choco.begin(),choco.end());
  
  if(choco.size() < m)
  {
    return -1;
  }
  
  int md=choco[m-1]-choco[0];
  
  for(int i=m;i<n;i++)
  {
    md=min(md,choco[i]-choco[i-m]);
  }
  return md;
}
