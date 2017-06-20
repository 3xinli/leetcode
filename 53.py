class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        #----https://discuss.leetcode.com/topic/6413/dp-solution-some-thoughts----#
        curSum, maxSum = -sys.maxint, -sys.maxint
        for num in nums:
            curSum = num if curSum < 0 else curSum+num
            maxSum = max(curSum, maxSum)
        return maxSum
            