class Solution(object):
    def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        evendc=0
        for i in nums:
            l=len(str(i))
            if l%2==0:
                evendc+=1
        return evendc