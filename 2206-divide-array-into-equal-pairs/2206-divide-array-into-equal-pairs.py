class Solution(object):
    def divideArray(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n=len(nums)
        # if n%2==1:
        #     return False
        # else:
        new=sorted(nums)
        for i in range(0,len(nums),2):
            if new[i]!=new[i+1]:
                return False
        return True

        