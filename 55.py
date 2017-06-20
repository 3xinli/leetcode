class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        step = [0]*len(nums)
        step[0] = nums[0]
        for i in range(1, len(nums)):
            if step[i-1] > 0:
                step[i] = max(step[i-1]-1, nums[i])
            else:
                return False
        return True
        