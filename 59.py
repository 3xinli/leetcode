class Solution(object):
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        ans = [[0]*n for i in range(n)]
        top, bottom, left, right = 0, n-1, 0, n-1
        s = 0
        while True:
            for i in range(left, right+1):
                s += 1
                ans[top][i] = s
            top += 1
            if top > bottom or left > right: break
            for j in range(top, bottom+1):
                s += 1
                ans[j][right] = s
            right -= 1
            if top > bottom or left > right: break
            for p in range(right, left-1, -1):
                s += 1
                ans[bottom][p] = s
            bottom -= 1
            if top > bottom or left > right: break
            for q in range(bottom, top-1, -1):
                s += 1
                ans[q][left] = s
            left += 1
            if top > bottom or left > right: break
        return ans