#include<bits/stdc++.h>
using namespace std;

bool isSortedRec(int arr[],int i,int n)
{
  if(i == n-1)
  {
    return true;
  }
  
  if(arr[i+1] < arr[i])
  {
    return false;
  }
  
  return isSortedRec(arr,i+1,n);
}

bool isSortedItr(int arr[],int n)
{
  for(int i=1;i<n;i++)
  {
    if(arr[i-1] > arr[i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin>>n;
  
  int arr[n];
  
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"Answer in Recursive Way"<<isSortedRec(arr,0,n)<<endl;
  cout<<"Answer in Iterative Way"<<isSortedItr(arr,n)<<endl;
  
}
