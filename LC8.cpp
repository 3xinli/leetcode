class Solution {
public:
    int myAtoi(string str) {
        int start=0,sign=1;
        long long result=0;
        for(start=0;start<str.size();start++)
        {
            if(str[start]==' ')
                continue;
            else
                break;
        }
        if(start==str.size())
            return result;
        if(str[start]=='-')
        {
            start++;
            sign=-1;
        }
        else if(str[start]=='+')
            start++;
        else if(isdigit(str[start])==0)
            return result;
        while(start<str.size() && isdigit(str[start]))
        {
            result=10*result+(str[start]-'0');
            if(sign==1 && result>INT_MAX)
                return INT_MAX;
            else if(sign==-1 && result>INT_MAX)
                return INT_MIN;
            start++;
        }
        return sign*result;
    }
};