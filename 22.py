class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        if not n: return []
        left, right, ans = n, n, []
        self.Helper(left, right, ans, "")
        return ans
        
    def Helper(self, left, right, ans, partRes):
        if not left and not right:
            ans.append(partRes)
        if right < left:
            return
        if left:
            self.Helper(left-1, right, ans, partRes+'(')
        if right:
            self.Helper(left, right-1, ans, partRes+')')