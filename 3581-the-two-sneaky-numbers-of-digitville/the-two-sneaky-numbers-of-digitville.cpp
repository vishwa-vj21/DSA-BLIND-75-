class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> diff;
        vector<int> ans;
        for(int &n: nums){
            if(diff[n]>=1){
                ans.push_back(n);
            }
            diff[n]++;
        }
        return ans;
    }
};