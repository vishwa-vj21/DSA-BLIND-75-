class Solution(object):
        def threeSum(self, nums):
            nums.sort()  #sorting the array first
            res=[]           
            for i,a in enumerate(nums):
                if i>0 and a==nums[i-1]: #checking if the current value is equal to the previous value, is yes then skipped
                    continue
                l, r = i+1, len(nums)-1 
                while(l<r):                   
                    sum=nums[i]+nums[l]+nums[r]
                    if(sum>0): 
                        r-=1  #reduce r 
                    elif(sum<0):
                        l+=1  #increase l                      
                    else:
                        res.append([nums[i],nums[l],nums[r]])
                        l+=1
                        while l<r and nums[l]==nums[l-1]:
                            l+=1  #updating the pointer, when left pointer is updated the right pointer is adjusted in the above conditions
            return res