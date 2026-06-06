class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> permute(vector<int>& nums) {
        dfs(0, nums);
        return ans;
    }

    void dfs(int start, vector<int>& nums){
        if(start==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=start; i<nums.size(); i++){
            swap(nums[start], nums[i]);
            dfs(start+1, nums);
            swap(nums[start], nums[i]);
        } 
    }

};