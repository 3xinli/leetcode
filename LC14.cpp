class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string shortest,result="";
        if(strs.size()==0)
            return result;
        int len=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<len)
            {
                len=strs[i].size();
                shortest=strs[i];
            }
        }
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=shortest[i])
                    return result;
            }
            result+=shortest[i];
        }
        return result;
    }
};