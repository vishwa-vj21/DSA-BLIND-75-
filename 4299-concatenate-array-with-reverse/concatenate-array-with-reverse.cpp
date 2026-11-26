class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> res(nums.begin(), nums.end());
        for(int i=nums.size()-1; i>=0; i--){
            res.push_back(nums[i]);
        }
        return res;
    }
};