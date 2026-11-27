class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> ans;
        for(int i=0; i<nums.size(); i++){
            ans[nums[i]]+=1;
        }
        int sum=0;
        for(auto &p: ans){
            sum+=(p.second*(p.second-1))/2;
        }
        return sum;
    }
};