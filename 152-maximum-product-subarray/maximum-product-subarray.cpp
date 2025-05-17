class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = nums[0];
        int maxim = nums[0];        //initializing all 3 variables to element in first index
        int minim = nums[0];

        for(int i=1; i<nums.size(); i++){
            // if(nums[i]==0){
            //     minim=1, maxim=1;
            // }
            int temp = maxim;
            maxim=max({maxim*nums[i], minim*nums[i], nums[i]});
            minim=min({temp*nums[i], minim*nums[i], nums[i]});
            maxproduct=max(maxproduct, maxim);
            //we'll be keeping track of maximim and minimum product subarray.
            
        }
        return maxproduct;
    }
};