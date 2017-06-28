class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: bool
        """
        #--Compared with question I, should consider the situation like [1,1,3,1]--#
        #--So if we find nums[start] == nums[end] == nums[mid]: start += 1; end -= 1--#
        if not nums: return False
        start, end = 0, len(nums)-1
        while start+1 < end:
            mid = start + (end - start)/2
            if nums[mid] == target:
                return True
            if nums[mid]==nums[start] and nums[mid]==nums[end]: start+=1; end-=1
            else:
                if (nums[mid] > nums[end]) == (target > nums[end]):
                    num = nums[mid]
                else:
                    if target > nums[end]:
                        num = sys.maxint
                    else:
                        num = -sys.maxint
                if num > target:
                    end = mid
                else:
                    start = mid
        if nums[start] == target or nums[end] == target: return True
        else: return False