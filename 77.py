class Solution(object):
    def combine(self, n, k):
        ans = []
        partRes = [0]*k
        i = 0
        while i>=0:
            partRes[i] += 1
            if partRes[i] > n: i -= 1
            elif i == k-1: ans += [partRes[:]]
            else:
                i += 1
                partRes[i] = partRes[i-1]
        return ans
    
    """
    #--------My Code, test(20, 16) Time Limit Exceeded--------#
    def combine(self, n, k):
        #:type n: int
        #:type k: int
        #:rtype: List[List[int]]
        ans = []
        self.Helper(1, n, k, ans, [])
        return ans
    
    def Helper(self, start, n, k, ans, partRes):
        if k == 0: return ans.append(partRes)
        for i in range(start, n+1):
            self.Helper(i+1, n, k-1, ans, partRes+[i])
    """