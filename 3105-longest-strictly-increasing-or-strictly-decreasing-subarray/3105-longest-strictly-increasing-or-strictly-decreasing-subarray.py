class Solution(object):
    def longestMonotonicSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        if n<=1:
            return 1
        maxl=1
        inc=1
        dec=1
        for i in range(1,n):
            if nums[i]>nums[i-1]:
                inc+=1
                dec=1
            elif nums[i]<nums[i-1]:
                dec+=1
                inc=1
            else:
                inc=1
                dec=1
            maxl=max(maxl,inc,dec)
        return maxl