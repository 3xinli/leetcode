class Solution(object):
    def search(self, result, list, S, pos):
        result.append(list)
        for i in range(pos, len(S)):
            self.search(result, list+[S[i]], S, i+1)
            
    def subsets(self, S):
        # write your code here
        result = []
        S = sorted(S)
        self.search(result, [], S, 0)
        return result 