class Solution(object):
    def maxAscendingSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxs=0
        curs=0
        for i in range(len(nums)):
            if i==0 or nums[i]>nums[i-1]:
                curs+=nums[i]
            else:
                maxs=max(maxs,curs)
                curs=nums[i]
        maxs=max(maxs,curs)
        return maxs
