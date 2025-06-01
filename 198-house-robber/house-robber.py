class Solution(object):
    def rob(self, nums):
        rob1, rob2 = 0, 0
        #[rob1, rob2, n, n+1, ...]
        for cur_val in nums:
            temp=max(cur_val+rob1, rob2)
            rob1=rob2
            rob2 = temp
        return rob2


      
       
       

       
        