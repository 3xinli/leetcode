class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        ans = []
        carry = 1
        for i in range(len(digits)-1, -1, -1):
            carry, remain = divmod(carry+digits[i], 10)
            ans.insert(0, remain)
        if carry == 1: return [1]+ans
        return ans