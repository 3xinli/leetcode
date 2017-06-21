class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        if m == 0 or n == 0: return 0
        triangle = [[1]]
        for i in range(1, m+n-1):
            triangle.append(map(lambda x, y: x+y, triangle[i-1]+[0], [0]+triangle[i-1]))
        return triangle[-1][n-1]