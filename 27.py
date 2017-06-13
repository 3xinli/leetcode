class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        i, j = 0, 0
        for i in range(len(nums)):
            if nums[i] == val:
                i += 1
            else:
                nums[j] = nums[i]
                j += 1
        if not nums or nums[0] == val:
            return 0
        return j