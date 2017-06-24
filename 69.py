class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x == 0: return 0
        start, end = 1, x
        while start <= end:
            mid = start + (end-start)/2
            if mid > x/mid:
                end = mid - 1
            else:
                if (mid+1) > x/(mid+1):
                    return mid
                start = mid + 1