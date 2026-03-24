class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0;
        unordered_map<int, int> hm;
        long long curr_sum = 0, max_sum = 0;
        for(int r=0; r<nums.size(); r++){
            if((r-l+1)>k){
                hm[nums[l]]--;
                curr_sum-=nums[l];
                if(hm[nums[l]]==0) hm.erase(nums[l]);
                l+=1;
            }
            curr_sum+=nums[r];
            hm[nums[r]]++;
            if((r-l+1)==k && hm.size()==k){
                max_sum=max(curr_sum, max_sum);
            }
        }
        return max_sum;
    }
};