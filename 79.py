class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        #------ 3-way partitioning------#
        n = len(nums)
        lt, i, gt = 0, 0, n-1
        pivot = 1
        while i <= gt:
            if nums[i] < pivot:
                nums[i], nums[lt] = nums[lt], nums[i]
                lt += 1; i += 1
            elif nums[i] == pivot:
                i += 1
            elif nums[i] > pivot:
                nums[i], nums[gt] = nums[gt], nums[i]
                gt -= 1
    """
    #-----------My code: quick sort solution, O(nlgn) time---------------#
    def sortColors(self, nums):
        random.shuffle(nums)    #can improve efficiency
        self.quicksort(nums, 0, len(nums)-1)
        
    def quicksort(self, nums, start, end):
        if start < end:
            splitpoint = self.partition(nums, start, end)
            self.quicksort(nums, start, splitpoint-1)
            self.quicksort(nums, splitpoint+1, end)
        
    def partition(self, nums, start, end):
        pivot = i = start
        j = end
        while i < j:
            while nums[i] <= nums[pivot]:
                if i == end: break
                i += 1
            while nums[j] > nums[pivot]:
                if j == start: break
                j -= 1
            if i >= j: break
            nums[i], nums[j] = nums[j], nums[i]
        nums[pivot], nums[j] = nums[j], nums[pivot]
        return j
    """