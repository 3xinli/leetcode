class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        if(needle.size()==0)
            return 0;
        int occur=haystack.size()-needle.size();
        for(int i=0;i<=occur;i++)
        {
            if(needle==haystack.substr(i,needle.size()))
                return i;
        }
        return -1;
    }
};
