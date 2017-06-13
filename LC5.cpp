class Solution {
public:
    string longestPalindrome(string s) {
        string substring="";
        if(s.size()==0)
            return substring;
        for(int i=0;i<s.size();i++)
        {
            int p1=i,p2=i;
            while(p1>=0 && p2<=s.size()-1)
            {
                if(s[p1]!=s[p2])
                {
                    if(p2-p1-1>substring.size())
                        substring=s.substr(p1+1,p2-p1-1);
                    break;
                }
                else
                {
                    p1--;
                    p2++;
                }
            }
            if(p2-p1-1>substring.size())
                substring=s.substr(p1+1,p2-p1-1);
        }
        for(int i=0;i<s.size()-1;i++)
        {
            int p1=i,p2=i+1;
            while(p1>=0 && p2<=s.size()-1)
            {
                if(s[p1]!=s[p2])
                {
                    if(p2-p1-1>substring.size())
                        substring=s.substr(p1+1,p2-p1-1);
                    break;
                }
                else
                {
                    p1--;
                    p2++;
                }
            }
            if(p2-p1-1>substring.size())
                substring=s.substr(p1+1,p2-p1-1);
        }
        return substring;
    }
};
