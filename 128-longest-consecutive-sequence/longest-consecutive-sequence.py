class Solution(object):
    def longestConsecutive(self, nums):
        seqSet = set(nums)
        longest = 0
        for n in seqSet:
            if (n-1) not in seqSet:
                length=0
                while (n+length) in seqSet:
                    length+=1
                longest = max(length, longest)
        return longest


        