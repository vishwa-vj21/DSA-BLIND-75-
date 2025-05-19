class Solution(object):
    def search(self, nums, target):
        left = 0
        right = len(nums) - 1
        res=-1
       
        while(left<=right):
            mid=(left+right)//2
            if(nums[mid]==target):
                return mid
            
            #we're in left sorted array
            if(nums[mid]>=nums[left]):
                
                if(nums[left]<=target<nums[mid]):
                    right=mid-1
                else:
                    left=mid+1
            else:
                if(nums[mid]<target<=nums[right]):
                    left=mid+1
                else:
                    right=mid-1
                
        
        return res
