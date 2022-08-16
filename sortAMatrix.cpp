void sortAMatrix(vector<vector<int>>&arr)
{
  vector<int>v;
  
  for(int i=0;i<arr.size();i++)
  {
    for(int j=0;j<arr[0].size();j++)
    {
      v.push_back(arr[i][j]);
    }
  }
  
  sort(v.begin(),v.end());
  int k=0;
  
  for(int i=0;i<arr.size();i++)
  {
    for(int j=0;j<arr[0].size();j++)
    {
      arr[i][j]=v[k++];
    }
  }
}
