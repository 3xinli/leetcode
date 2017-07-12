class Solution {
public:
    int numDecodings(string s) {
        int size=s.size();
        vector<int> dp(size+1,0);
        if(size==0 || size==1 && s[0]=='0')
            return 0;
        if(size==1)
            return 1;
        if(s[0]=='0' || s[0]>'2'&&s[1]=='0')
            return 0;
        dp[0]=1;
        dp[1]=1;
        int pt=2;
        while(pt<=size)
        {
            if(s[pt-1]=='0' && (s[pt-2]>'2' || s[pt-2]=='0'))
                return 0;
            else if(s[pt-1]=='0' && s[pt-2]<='2' && s[pt-2]>'0')
                dp[pt]=dp[pt-2];
            else if(s[pt-2]=='0')
                dp[pt]=dp[pt-1];
            else
            {
                int tmp=stringtoint(s.substr(pt-2,2));
                if(tmp<=26)
                    dp[pt]=dp[pt-2]+dp[pt-1];
                else
                    dp[pt]=dp[pt-1];
            }
            pt++;
        }
        return dp[size];
    }        
    int stringtoint(string s)
    {
        stringstream ss(s);
        int x;
        ss>>x;
        return x;
    }
};
