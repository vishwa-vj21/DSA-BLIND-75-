class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int res = nums[0];
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            if(nums[left]<=nums[right]){ //if the array is sorted, it breaks out of the loop
                res = min(res, nums[left]);
                break;
            }
            int mid=(left+right)/2;
            res=min(res, nums[mid]);
            if(nums[mid]>=nums[left]){  //we take the right subarray which comes after mid
                left=mid+1;
            }
            else{  //we take the left subarray which stops at mid starting from left
                right=mid;
            }

        }

        
        return res;
    }
};