class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int mini=*min_element(nums.begin(), nums.end());
        int maxi=*max_element(nums.begin(), nums.end());
        unordered_set<int> arr(nums.begin(), nums.end());
        vector<int> res;
        for(int i=mini+1; i<maxi; i++){
            if(!arr.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};