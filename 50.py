class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        ans = 1
        absN = abs(n)
        while absN > 0:
            if absN & 1 == 1: ans *= x
            absN = absN >> 1
            x *= x
        if n < 0: return 1/ans
        else: return ans