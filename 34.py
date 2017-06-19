class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if not nums: return[-1, -1]
        #-----Need to redo-------#
        ans = []
        start, end = self.BinarySearch(nums, target-0.5)
        self.judgePoint(nums, target, start, end, ans)
        start, end = self.BinarySearch(nums, target+0.5)
        #should judge the end first, to avoid condition nums:[2,2], target:2
        self.judgePoint(nums, target, end, start, ans)
        return ans
    
    def BinarySearch(self, nums, target):
        start, end = 0, len(nums)-1
        while start+1 < end:
            mid = start + (end-start)/2
            if nums[mid] > target:
                end = mid
            else:
                start = mid
        return start, end
    
    def judgePoint(self, nums, target, start, end, ans):
        if nums[start] == target: ans.append(start)
        elif nums[end] == target: ans.append(end)
        else: ans.append(-1)