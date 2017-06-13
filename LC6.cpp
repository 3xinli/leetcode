class Solution {
public:
    string convert(string s, int numRows) {
        int flag=1,cur=0;
        vector<string> newstring(numRows,"");
        string result="";
        for(int i=0;i<s.size();i++)
        {
            newstring[cur]+=s[i];
            if(cur==0)
                flag=1;
            else if(cur==numRows-1)
                flag=-1;
            if(flag==1 && cur<numRows-1)
                cur++;
            else if(flag==-1 && cur>0)
                cur--;
        }
        for(int i=0;i<numRows;i++)
            result+=newstring[i];
        return result;
    }
};
