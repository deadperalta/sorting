int mh(vector<int>&arr)
{
  sort(arr.begin(),arr.end());
  
  int prevWidth=arr[0];
  int prevCount=1;
  
  int currWidth=0;
  int currCount=0;
  
  int ans=0;
  
  for(int i=1;i<arr.size();i++)
  {
    currWidth+=arr[i];
    currCount+=1;
    
    if(currWidth > prevWidth && currCount > prevCount)
    {
      prevWidth=currWidth;
      prevCount=currCount;
      ans++;
    }
  }
  return ans;
}
