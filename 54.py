class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        #---pythonic solution---#
        #return matrix and list(matrix.pop(0))+self.spiralOrder(zip(*matrix)[::-1])
        #-----More general method-----#
        if not matrix: return []
        ans = []
        top, bottom, left, right = 0, len(matrix)-1, 0, len(matrix[0])-1
        while True:
            for i in range(left, right+1):
                ans += [matrix[top][i]]
            top += 1
            if top > bottom or left > right: break
            for j in range(top, bottom+1):
                ans += [matrix[j][right]]
            right -= 1
            if top > bottom or left > right: break
            for p in range(right, left-1, -1):
                ans += [matrix[bottom][p]]
            bottom -= 1
            if top > bottom or left > right: break
            for q in range(bottom, top-1, -1):
                ans += [matrix[q][left]]
            left += 1
            if top > bottom or left > right: break
        return ans
                