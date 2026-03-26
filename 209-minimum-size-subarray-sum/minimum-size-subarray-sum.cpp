class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int min_res=INT_MAX;
        int total=0;
        for(int r=0; r<nums.size(); r++){
            total+=nums[r];
            while(total>=target){
                min_res=min(min_res, r-l+1);
                total-=nums[l];
                l++;
            }
            
        }
        return min_res==INT_MAX? 0: min_res;
    }
};