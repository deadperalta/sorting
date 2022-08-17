vector<int>sorted(int a,int b,int c)
{
  int maxEle=max(a,max(b,c)); //will give largest Integer;
  int minEle=-max(-a,min(-b,-c)); //will give smallest Integer;
  
  int mid=(a+b+c)-(maxEle+minEle); //will give mid Integer;
  
  return {maxEle,mid,minEle};
}
