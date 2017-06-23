class Solution {
public:
    int mySqrt(int x) {
        long long begin=0,end=x;
        while(begin<=end)
        {
            long long mid=begin+(end-begin)/2;
            if(mid*mid==(long long) x)
                return mid;
            else if(mid*mid>(long long) x)
                end=mid-1;
            else
                begin=mid+1;
        }
        return end;
    }
};
