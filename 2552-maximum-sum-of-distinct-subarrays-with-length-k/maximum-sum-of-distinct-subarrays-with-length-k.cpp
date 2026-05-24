class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int start=0;
        long long maxi=0;
        long long maxsum=0;
        unordered_set<int> hs;
        
        for(int end=0; end<nums.size(); end++){
            while(hs.count(nums[end]) || end-start+1>k){
                maxi-=nums[start];
                hs.erase(nums[start]);
                start++;    
            }
            maxi+=nums[end];
            hs.insert(nums[end]);
            if(end-start+1==k){
                maxsum=max(maxi,maxsum);
            }
        }
        return maxsum;
    }
};