class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        nums.sort()
        self.Helper(nums, res, [])
        return res
    
    def Helper(self, nums, res, partRes):
        if not nums: return res.append(partRes)
        for i in range(len(nums)):
            if i == 0 or nums[i] != nums[i-1]:
                self.Helper(nums[:i]+nums[i+1:], res, partRes+[nums[i]])