class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        int count=0;
        int preSum=0;
        hm[0]=1;
        for(int i=0; i<nums.size(); i++){
            preSum+=nums[i];
            count+=hm[preSum-k];
            hm[preSum]++;
        }
        return count;
    }
};