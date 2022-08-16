vector<int> sortSquare(vector<int>&arr)
{
  int left=0;
  int right=arr.size()-1;
  
  vector<int>ans(arr.size());
  int k=arr.size()-1;
  
  while(left <= right)
  {
    if(abs(arr[left]) > abs(arr[right]))
    {
      ans[k]=arr[left];
      left++;
    }
    else
    {
      ans[k]=arr[right];
      right--;
    }
    k--;
  }
  return ans;
}
