#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int>&a,pair<int,int>&b)
{
  return a.second < b.second;
}

int main()
{
  int n;
  cin>>n;
  
  vector<pair<int,int>>arr;
  
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    
    arr.push_back({x,y});
  }
  
  cout<<"Initial Array"<<endl;
  
  for(auto it:arr)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }
  
  sort(arr.begin(),arr.end());
 
  cout<<"Sorting by 1st element of Pair"<<endl;
  for(auto it:arr)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }
  
  sort(arr.begin(),arr.end(),comp);
 
  cout<<"Sorting by 2nd element of Pair"<<endl;
  for(auto it:arr)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }
}
