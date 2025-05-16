class Solution(object):
    def maxProfit(self, prices):
        l, r= 0, 1  #at the start, it starts from l=0 and r=1
        maxp=0

        while r<len(prices):
            if(prices[l]<prices[r]):  #if the graph is increasing between two points
                profit = prices[r]-prices[l]  #current profit is calculated
                maxp=max(maxp, profit)  #current profit is compared with the max profit
            else:
                l=r
            r+=1  #right pointer keeps on moving to the next point
        return maxp
        """
        :type prices: List[int]
        :rtype: int
        """
        