class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        for(int i=0; i<nums.size(); i++){
            int m=nums[i];
            if(hm.count(nums[i])) return {i, hm[m]};
            else{
                hm[target-nums[i]]=i;
            }
        }
        return {};
    }
};