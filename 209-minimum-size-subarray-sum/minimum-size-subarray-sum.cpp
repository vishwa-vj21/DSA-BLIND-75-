class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int res=0;
        int minres=INT_MAX;

        for(int end=0; end<nums.size(); end++){
            res+=nums[end];
            while(res>=target){
                minres=min(minres, end-start+1);
                res-=nums[start];
                start++;
            }
            
        }
    return minres!=INT_MAX? minres: 0;
    }
};