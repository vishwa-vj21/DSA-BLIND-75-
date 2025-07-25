class Solution(object):
    def longestConsecutive(self, nums):
        seqSet = set(nums)
        longest = 0
        for n in seqSet:
            if (n-1) not in seqSet:
                currentNum=n
                length=1
                while (currentNum+1) in seqSet:
                    currentNum+=1
                    length+=1
                longest = max(length, longest)
        return longest


        