class Solution(object):
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        """
        all_path = [p for p in path.split("/") if p!='.' and p!=""]
        ans = []
        for p in all_path:
            if p == "..":
                if ans: ans.pop()
            else:
                ans += [p]
        return "/"+"/".join(ans)