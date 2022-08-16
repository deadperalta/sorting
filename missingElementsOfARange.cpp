void missing(vector<int>&arr,int low,int high)
{
  int *ptr=arr.upper_bound(arr.begin(),arr.end(),low);
  int ind=arr-ptr;
  
  int i=ind;
  int x=low;
  
  while(i < arr.size() && x <= high)
  {
    if(arr[i] != x)
    {
      cout<<x<<" ";
    }
    else
    {
      i++;
    }
    
    x++;
  }
}
