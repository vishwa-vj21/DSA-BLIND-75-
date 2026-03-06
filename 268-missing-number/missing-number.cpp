class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> mn;
        for(int i=0; i<nums.size(); i++){
            mn.insert(nums[i]);
        }
        for(int i=0; i<=nums.size(); i++){
            if(!(mn.count(i))){
                return i;
            }
        }
        return -1;
    }
};