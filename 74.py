class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        A = []
        for mat in matrix:
            A += mat
        start, end = 0, len(A)-1
        while start <= end:
            mid = start + (end-start)
            if A[mid] == target:
                return True
            elif A[mid] > target:
                end = mid - 1
            else:
                start = mid + 1
        return False
        