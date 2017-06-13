class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        #----Use two pointers; time: O(n); space: in-place----#
        if not nums: return 0
        j = 0 #i: fast, j: slow
        for i in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                i += 1
            else:
                j +=1
                nums[j] = nums[i]
        return (j+1)
                