int count(vector<int>arr)
{
  sort(arr.begin(),arr.end());
  
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i] == arr.size()-i-1)
    {
      return arr[i];
    }
  }
  return -1;
}
