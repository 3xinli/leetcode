class Solution(object):
    def getPermutation(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        ans = []
        nums = range(1, n+1)
        fact = [1]*n
        for i in range(1, n):
            fact[i] = (i)*fact[i-1]
        k -= 1
        while n > 0:
            n -= 1
            index, k = divmod(k, fact[n])
            ans.append(nums[index])
            nums.remove(nums[index])
        return ''.join(map(str, ans))
            
        
            
        