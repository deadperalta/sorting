static bool comp(string &a,string &b)
{
	if(a.size() == b.size())
	{
		return a < b;
	}
	
	return a.size() < b.size();
}
vector<string>sortBigInt(vector<string>&arr)
{
	sort(arr.begin(),arr.end(),comp);
	return arr;
}
