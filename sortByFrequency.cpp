void sortByFrequency(vector<int>&arr)
{
  priority_queue<pair<int,int>>q;
  unordered_map<int,int>freq;
  
  for(int i:arr)
  {
    freq[i]++;
  }
  
  for(auto it:freq)
  {
    q.push({it.second,it.first});
  }
  
  int i=0;
  while(i < arr.size())
  {
    int fr=q.top().first;
    int ele=q.top().second;
    q.pop();
    
    while(fr--)
    {
      arr[i++]=ele;
    }
    
   }
   
 }
