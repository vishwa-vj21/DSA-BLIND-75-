class Solution {
public:
    int jump(vector<int>& nums) {
        int res=0;
        int l=0, r=0;
        while(r<nums.size()-1){
            int maxsum=0;
            for(int i=l; i<r+1; i++){
                maxsum=max(maxsum, nums[i]+i);
            }
            l=r+1;
            r=maxsum;
            res++;
        }
        return res;
    }
};