class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int start=0;
        long long maxi=0;
        long long maxsum=0;
        unordered_map<int, int> freq;
        
        for(int end=0; end<nums.size(); end++){
            maxi+=nums[end];
            freq[nums[end]]++;
            while(freq[nums[end]]>1 || end-start+1>k){
                maxi-=nums[start];
                freq[nums[start]]--;
                start++;    
            }
            
            if(end-start+1==k){
                maxsum=max(maxi,maxsum);
            }
        }
        return maxsum;
    }
};