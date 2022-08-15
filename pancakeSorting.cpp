int findMax(vector<int>arr,int size)
{
	int mi;
	int maxe=INT_MIN;
	
	for(int i=0;i<=size;i++)
	{
		if(arr[i] > maxe)
		{
			maxe=arr[i];
			mi=i;
		}
	}
	return mi;
}
void flip(vector<int>&arr,int size)
{
	for(int i=0;i<size/2;i++)
	{
		swap(arr[i],arr[size-i]);
	}
}
void pancakeSort(vector<int>arr)
{
	for(int currSize=arr.size()-1;i>1;i--)
	{
		int mi=findMax(arr,currSize);
		
		if(mi != currSize())
		{
			flip(arr,mi);
			flip(arr,currSize);
		}
	}
} 
