class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> hm;
        vector <int> res;
        for(int i=0; i<temp.size(); i++){
            if(hm.count(temp[i])){
                continue;
            }
            else{
                hm[temp[i]]=i;
            }
        }
        for(int i=0; i<nums.size(); i++){
            res.push_back(hm[nums[i]]);
        }
        return res;
    }
};