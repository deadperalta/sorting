class Solution {
    void removeZeroes(string &ans)
    {
        while(ans.size()>1 && ans[0] == '0')
        {
            ans.erase(ans.begin());
        }
    }
    void removeFromAns(string &ans,int rem)
    {
        for(int i=ans.size();i>=0;i--)
        {
            int n=ans[i]-'0';
                
            if(n % 3 == rem)
            {
                ans.erase(i,1);
                removeZeroes(ans);
                return;
            }
        }
            
        int i1=-1,i2=-1;
            
        for(int i=ans.size()-1;i>=0;i--)
        {
            int n=ans[i]-'0';
                
            if(n % 3 == 3-rem && i1 == -1)
            {
                i1 = i;
            }
            else if(n % 3 == 3-rem && i2 == -1)
            {
                i2 = i;
            }
            if(i1 != -1 && i2 != -1)
            {
                break;
            }
        }
            
        if(i1 != -1 && i2 != -1)
        {
            ans.erase(i1,1);
            ans.erase(i2,1);
            removeZeroes(ans);
        }
        return;
    }
public:
    string largestMultipleOfThree(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        
        int sum=0;
        
        for(int i:digits)
        {
            sum+=i;
        }
        
        string ans="";
        
        for(int i=digits.size()-1;i>=0;i--)
        {
            ans+=digits[i]+'0';
        }
        
        removeZeroes(ans);
        
        if(sum % 3 == 0)
        {
            return ans;
        }
        
        if(sum % 3 == 1)
        {
            removeFromAns(ans,1);
            return ans;
        }
        
        removeFromAns(ans,2);
        return ans;
    }
};
