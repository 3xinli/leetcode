class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        #---------Need redo, use --------#
        #https://discuss.leetcode.com/topic/52275/easy-python-solution-based-on-lexicographical-permutation-algorithm
        right = len(nums)-1
        while nums[right] <= nums[right-1] and right-1 >= 0:
            right -= 1
        if right == 0:
            nums[:] = reversed(nums)
        else:
            pivot = right - 1
            successor = 0
            for i in range(len(nums)-1, pivot, -1):
                if nums[i] > nums[pivot]:
                    successor = i
                    break
            nums[pivot], nums[successor] = nums[successor],nums[pivot]
            nums[pivot+1:] = reversed(nums[pivot+1:])
            