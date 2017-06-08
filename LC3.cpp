class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> check;
        int p1=0,p2=0,len=0;//baca
        if(s.size()>0)
            len=1;
        while(p1<s.size() && p2<s.size())
        {
            cout<<p1<<" "<<p2<<" "<<len<<endl;
            if(check[s[p2]]==0)
                check[s[p2]]=1;
            else
            {
                while(s[p1]!=s[p2])
                {
                    check[s[p1]]=0;
                    p1++;
                }
                p1++;
                
            }
            p2++;
            if(p2-p1>len)
                len=p2-p1;
        }
        return len;
    }
};