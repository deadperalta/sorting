#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  
  vector<vector<int>>arr(n,vector<int>(m));
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      int x;
      cin>>x;
      
      arr[i][j]=x;
    }
  }
  
  cout<<"Original 2D vector"<<endl;
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
  //row wise Sorted;
  
  for(int i=0;i<n;i++)
  {
    sort(arr[i].begin(),arr[i].end());
  }
  
  
