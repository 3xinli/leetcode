class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        a = list(map(int, a))
        b = list(map(int, b))
        carry = 0
        ans = ""
        while a or b or carry:
            v1, v2 = 0, 0
            if a: v1 = a.pop()
            if b: v2 = b.pop()
            carry, remain = divmod(carry+v1+v2, 2)
            ans = str(remain) + ans
        return ans
            
        
        
        