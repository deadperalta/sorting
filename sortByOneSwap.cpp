#include <bits/stdc++.h>
using namespace std;

void sortByOneSwap(vector<int>&arr)
{
    
    int first=-1,second=-1,third=-1;
    
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i+1] < arr[i])
        {
            if(first == -1)
            {
                first=i;
                second=i+1;
            }
            else
            {
                third=i+1;
            }
        }
    }
    
    if(third != -1)
    {
        swap(arr[first],arr[third]);
    }
    else
    {
        swap(arr[second],arr[first]);
    }
    
}

int main() {
	int n;
	cin>>n;
	
	vector<int>arr;
	
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    
	    arr.push_back(x);
	}
	sortByOneSwap(arr);
	
	for(int i:arr)
	{
	    cout<<i<<" ";
	}
}
