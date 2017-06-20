class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d = {}
        for s in strs:
            temp = tuple(sorted(s))
            #---dictionary can use tuple as key, whereas list----#
            d[temp] = d.get(temp, []) + [s]
        return d.values()