class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        """
        #------------mycode------------#
        if not strs: return ""
        ans = ""
        for i in range(0, len(strs[0])):
            for j in range(1, len(strs)):
                print len(strs[j])
                if len(strs[j]) <= i or strs[0][i] != strs[j][i]:
                    return ans
            ans += strs[0][i]
        return ans
        """
        def lcp(s, t):
            if len(s) > len(t):
                s, t = t, s
            for i in range(0, len(s)):
                if s[i] != t[i]:
                    return s[:i]
            return s
        return  reduce(lcp, strs) if strs else ""
                    