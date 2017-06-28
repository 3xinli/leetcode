class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        j = 0
        #---Use for n in nums is much faster than "for i in range(len(nums))"---#
        for n in nums:
            #-should be nums[i] > nums[j-2], instead of nums[i] > nums[i-2]. The modification of list should be considered.-#
            if j<2 or n > nums[j-2]:
                nums[j] = n
                j += 1
        return j
        
        """
        #------------My code, easy to make mistake near boundary, if use while loop-----------------#
        if not nums: return 0
        i, j = 1, 1
        cnt = 1
        while i < len(nums):
            if nums[i]==nums[i-1]:
                cnt -= 1
                if cnt < 0:
                    while i<len(nums) and nums[i] == nums[i-1]:
                        i += 1
                    cnt = 1
            else:
                cnt = 1
            if i<len(nums):
                nums[j] = nums[i]
                i += 1; j += 1
        return j
        """
        
        
                
                    
                
            
                
                
            
        