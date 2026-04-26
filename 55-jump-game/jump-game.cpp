class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxsum=0;
        for(int i=0; i<nums.size(); i++){
            if(i>maxsum) return false;
            maxsum=max(maxsum, nums[i]+i);
        }
        return maxsum>=nums.size()-1;
    }
};