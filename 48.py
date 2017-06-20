class Solution(object):
    def rotate(self, A):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        """/*
         * clockwise rotate
         * first reverse up to down, then swap the symmetry 
         * 1 2 3     7 8 9     7 4 1
         * 4 5 6  => 4 5 6  => 8 5 2
         * 7 8 9     1 2 3     9 6 3
        */"""
        A.reverse()
        for i in range(len(A)):
            for j in range(i):
                A[i][j], A[j][i] = A[j][i], A[i][j]
        """/*
         * anticlockwise rotate
         * first reverse left to right, then swap the symmetry
         * 1 2 3     3 2 1     3 6 9
         * 4 5 6  => 6 5 4  => 2 5 8
         * 7 8 9     9 8 7     1 4 7
        */"""
        
        