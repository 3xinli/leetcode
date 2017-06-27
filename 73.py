class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        #------------in place space complexity-----------#
        col0 = 1
        m, n = len(matrix), len(matrix[0])
        for i in range(m):
            if matrix[i][0] == 0: col0 = 0
            for j in range(1, n):
                if matrix[i][j] == 0:
                    matrix[i][0], matrix[0][j] = 0, 0
        
        for p in range(m-1, -1, -1):
            for q in range(n-1, 0, -1):
                if matrix[p][0]==0 or matrix[0][q]==0:
                    matrix[p][q] =0
            if col0==0: matrix[p][0]=0
        """
        #---------My code: O(m*n) time complexity, O(n) space complexity----------#
        row, col = [], []
        m = len(matrix)
        n = len(matrix[0])
        for i in range(m):
            for j in range(n):
                if (not i in row or not j in col) and matrix[i][j] == 0:
                    if not i in row: row += [i]
                    if not j in col: col += [j]
        for r in row:
            matrix[r][:] = [0]*n
        for c in col:
            for p in range(m):
                matrix[p][c] = 0
        """        
                