class Solution {
public:
    string countAndSay(int n) {
        string newstring="1";
        for(int i=1;i<n;i++)
        {
            string s=newstring;
            newstring="";
            char curchar=s[0];
            int cnt=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==curchar)
                    cnt++;
                else
                {
                    newstring+=(cnt+'0');
                    newstring+=curchar;
                    curchar=s[j];
                    cnt=1;
                }
            }
            newstring+=(cnt+'0');
            newstring+=curchar;
        }
        return newstring;
    }
};
