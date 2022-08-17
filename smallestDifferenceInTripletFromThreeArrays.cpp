int minDiff(vector<int>&a,vector<int>&b,vector<int>&c)
{
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  
  int i=0,j=0,k=0;
  int ans=INT_MAX;
  
  while(i < a.size() && j < b.size() && k < c.size())
  {
    int maxE=max(a[i],max(b[j],c[k]));
    int minE=min(a[i],min(b[j],c[k]));
    
    int ans=min(ans,maxE-minE);
    
    if(minE == a[i])
    {
      i++;
    }
    else if(minE == b[j])
    {
      j++;
    }
    else
    {
      k++;
    }
  }
  
  return ans;
}
