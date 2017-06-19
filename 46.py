class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        self.Helper(nums, res, [])
        return res
    
    def Helper(self, nums, res, partRes):
        if not nums: return res.append(partRes)
        for i in range(len(nums)):
            self.Helper(nums[:i]+nums[i+1:], res, partRes+[nums[i]])
        