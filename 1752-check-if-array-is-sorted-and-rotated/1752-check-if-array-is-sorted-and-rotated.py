class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n=len(nums)
        c=0
        if n<=1:
            return True
        for i in range(n):
            if nums[i]>nums[(i+1)%n]:
                c=c+1
        return c<=1

        