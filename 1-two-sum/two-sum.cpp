// using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;  //usage of hashmap

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(hashmap.count(complement)){  //checking if it is present inside the hashmap
                return {hashmap[complement], i};
            }
            hashmap[nums[i]]=i; //if not present, we add them as key value pairs
        }
        return {};
        
    }
};