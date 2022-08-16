void larger(vector<int>arr)
{
  sort(arr.begin(),arr.end());
  
  for(int i=arr.size()-1;i>=arr.size()/2;i--)
  {
    cout<<arr[i]<<" ";
  }
}
