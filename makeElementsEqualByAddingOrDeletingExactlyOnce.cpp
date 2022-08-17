bool equal(vector<int>&arr)
{
  set<int>st;
  
  for(int i:arr)
  {
    st.insert(arr);
  }
  
  if(st.size() == 1)
  {
    return true;
  }
  
  if(st.size() == 2)
  {
    return true;
  }
  
  if(st.size() == 3)
  {
    int x=*st.begin();
    st.erase(x);
    
    int y=*st.begin();
    st.erase(y);
    
    int z=*st.begin();
    st.erase(z);
    
    if((z-y) == (y-x))
    {
      return true;
    }
    return false;
  }
