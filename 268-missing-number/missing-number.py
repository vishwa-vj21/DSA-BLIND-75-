class Solution(object):
    def missingNumber(self, nums):
        sum=0
        n=len(nums)
        for i in range(n):
            sum+=nums[i]
        return ((n*(n+1)/2)-sum)
        """
        :type nums: List[int]
        :rtype: int
        """
        