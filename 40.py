class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        res = []
        self.Helper(candidates, target, res, [])
        return res
        
    def Helper(self, candidates, target, res, partRes):
        if target < 0: return
        if target == 0: return res.append(partRes)
        for i in range(len(candidates)):
            if i == 0 or candidates[i] != candidates[i-1]:
                self.Helper(candidates[i+1:], target-candidates[i], res, partRes+[candidates[i]])