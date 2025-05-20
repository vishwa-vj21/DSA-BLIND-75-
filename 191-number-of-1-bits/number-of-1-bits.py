class Solution(object):
    def hammingWeight(self, n):
        res=0
        while n:
            n=n&(n-1)  #each time the number of one reduces, and finally returned the result
            res+=1
        return res
        
        