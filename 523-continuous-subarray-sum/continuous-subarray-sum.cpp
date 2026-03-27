class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        int preSum=0;
        hm[0]=-1;
        for(int i=0; i<nums.size(); i++){
            preSum+=nums[i];
            int remainder=preSum%k;
            if(hm.count(remainder)){
                if((i-hm[remainder])>=2) return true;
                
            }
            else{
                hm[remainder]=i;
            }
        }
        return false;
    }
};