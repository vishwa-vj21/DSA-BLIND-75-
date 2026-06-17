class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int ans=0;
        for(int r=0; r<nums.size(); r++){
            if(nums[r]==0){
                l=r+1;
            }
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};