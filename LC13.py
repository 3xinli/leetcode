class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        RN_dict = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        """
        #Principle of Roman numeral:
            I placed before V or X indicates one less, so four is IV (one less than five) and nine is IX (one less than ten)
            X placed before L or C indicates ten less, so forty is XL (ten less than fifty) and ninety is XC (ten less than a hundred) C placed before D or M indicates a hundred less, so four hundred is CD (a hundred less than five hundred and nine hundred is CM (a hundred less than a thousand)
        """
        sumRN = 0
        for i in range(0, len(s)-1):
            if RN_dict[s[i]] < RN_dict[s[i+1]]:
                sumRN -= RN_dict[s[i]]
            else:
                sumRN += RN_dict[s[i]]
        return sumRN+RN_dict[s[-1]]
        