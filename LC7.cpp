class Solution {
public:
    int reverse(int x) {
        long long result=0,tmp=(long long) x;
        int sign=1;
        if(tmp<0)
        {
            tmp=-tmp;
            sign=-1;
        }
        while(tmp>0)
        {
            result=10*result+tmp%10;
            tmp=tmp/10;
        }
        if(result*sign>INT_MAX || result*sign<INT_MIN)
            return 0;
        return sign*result;
    }
};