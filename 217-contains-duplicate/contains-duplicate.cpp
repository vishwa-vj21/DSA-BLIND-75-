class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;  //using hashset

        for(int i=0; i<nums.size(); i++){
            if(hash.count(nums[i])){  //checking if the element is already present
                return true;  //returns true if it has duplicate elements
            }
            hash.insert(nums[i]);  //inserts it if it is not already present inside the set
        }
        return false;
    }
};