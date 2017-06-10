class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        closest = sys.maxint
        ans = sys.maxint
        nums.sort()
        for i in range(len(nums)-2):
            if i > 1 and nums[i] == nums[i-1]:
                continue
            l, r = i+1, len(nums)-1
            while l < r:
                s = nums[i] + nums[l] + nums[r] - target
                if abs(s) < closest:
                    closest = abs(s)
                    ans = s + target
                if s > 0:
                    r -= 1
                elif s < 0:
                    l += 1
                else:
                    #if it matches target, return directly, no more searching
                    return ans  
        return ans