class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        vector<vector<int>> bucket(nums.size()+1);
        unordered_map<int, int> freq;
        for(int n: nums){
            freq[n]++;
        }
        for(auto f: freq){
            bucket[f.second].push_back(f.first);
        }
        for(int i=nums.size(); i>=0 && res.size()<k; i--){
            for(int b: bucket[i]){
                res.push_back(b);
                if(res.size()==k){
                    return res;
                }
            }
        }
    return res;
    }
};