class Solution(object):
    def isArraySpecial(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n=len(nums)
        if n<=1:
            return True
        for i in range(0,n-1,1):
            if(nums[i]%2==nums[i+1]%2):
                return False
        return True
        