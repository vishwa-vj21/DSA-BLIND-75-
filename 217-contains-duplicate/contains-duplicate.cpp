class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_set<int> cd;
        
        for(int n: nums){
            if(cd.count(n)){
                // cd[nums[i]]++;
                return true;
            }
            
                cd.insert(n);
            
        
        }
        return false;
    }
    
};