class Solution:
    """
    @param A : a list of integers
    @param target : an integer to be searched
    @return : an integer
    """
    def search(self, A, target):
        # write your code here
        if (A == []):
            return -1
        
        start, end = 0, len(A) - 1
        while (start + 1 < end):
            mid = start + (end - start)//2
            if (A[mid] == target):
                return mid
            
            if (A[start] < A[mid]):
                if (target < A[mid] and target >= A[start]):
                    end = mid
                else:
                    start = mid
            else:
                if (target > A[mid] and target <= A[end]):
                    start = mid
                else:
                    end = mid
                
        if (A[start] == target):
            return start
        elif (A[end] == target):
            return end
        else:
            return -1