class Solution {
public:
    int divide(int dividend, int divisor) {
    //bit manipulation
        if(divisor==0 || dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        int sign=1;
        long long newdividend,newdivisor,result=0;
        if(dividend<0 && divisor>0 || dividend>0 && divisor<0)
            sign=-1;
        newdividend=abs((long long) dividend);
        newdivisor=abs((long long) divisor);
        while(newdividend-newdivisor>=0)
        {
            int shift=0;
            while(newdividend-(newdivisor<<shift)>=0)
                shift++;
            shift--;
            newdividend-=(newdivisor<<shift);
            result+=(1<<shift);
        }
        return (int) result*sign;
    }
};
