from collections import Counter
class Solution(object):
    def findValidPair(self, s):
        """
        :type s: str
        :rtype: str
        """
        dc=Counter(s)
        for i in range(len(s)-1):
            d1=s[i]
            d2=s[i+1]
            if d1!=d2:
                if dc[d1]==int(d1) and dc[d2]==int(d2):
                    return d1+d2
        return ""
                    
        