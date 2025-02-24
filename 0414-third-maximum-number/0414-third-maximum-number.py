class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=set(nums)
        res=sorted(s,reverse=True)
        if len(res)>2:
            return res[2]
        else:
            return max(res)