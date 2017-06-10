class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        if not digits: return []
        """
        #-------my code=--------#
        ans = []
        def helper(digits, ans, partRes):
            if not digits: return ans.append(partRes)
            d = {'1':['*'],'2':['a','b','c'],'3':['d','e','f'],'4':['g','h','i'],'5':['j','k','l'],'6':['m','n','o'],'7':['p','q','r','s'],'8':['t','u','v'],'9':['w','x','y','z']}
            for e in d[digits[0]]:
                helper(digits[1:], ans, partRes+e)
        helper(digits, ans, "")
        return ans
        """
        d = {'1':'*','2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
        letters = [d[x] for x in digits]
        if len(letters) == 1: return list(d[digits])
        return reduce((lambda x, y: [i+j for i in x for j in y]), letters)