class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;
        int pre2=1,pre=2,cur;
        for(int i=3;i<=n;i++)
        {
            cur=pre2+pre;
            pre2=pre;
            pre=cur;
        }
        return cur;
    }
};
