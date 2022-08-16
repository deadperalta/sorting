int ksmallest(int arr[],int n,int k)
{
  sort(arr,arr+n);
 
  for(int i=0;i<n;i++)
  {
    if(arr[i] <= k)
    {
      k++;
    }
  }
  
  return k;
}
