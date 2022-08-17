int sd(int a[],int b[],int n)
{
  sort(a,a+n);
  sort(b,b+n);
  
  int i=0;
  int j=0;
  
  int sdiff=INT_MAX;
  
  while(i < n && j < n)
  {
    sdiff=min(sdiff,a[i],b[j]);
    
    if(a[i] < b[j])
    {
      i++;
    }
    else
    {
      j++;
    }
  }
  return sdiff;
}
