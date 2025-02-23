class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        valtoind={}
        for i,num in enumerate(nums):
            if num in valtoind and abs(i-valtoind[num])<=k:
                    return True
            valtoind[num]=i
        return False