class Solution {
public:
    bool isPalindrome(int x) {
        int origx=x,newx=0;
        if(x<0)
            return 0;
        while(x)
        {
            newx=10*newx+x%10;
            x=x/10;
        }
        if(origx==newx)
            return 1;
        else
            return 0;
    }
};