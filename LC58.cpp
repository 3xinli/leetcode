class Solution {
public:
    int lengthOfLastWord(string s) {
        int findword=0,cnt=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(isalpha(s[i]))
                findword=1;
            if(findword==0 && s[i]==' ')
                continue;
            else if(findword==1 && isalpha(s[i]))
                cnt++;
            else
                break;
        }
        return cnt;
    }
};
