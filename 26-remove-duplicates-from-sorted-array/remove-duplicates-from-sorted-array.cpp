class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int l=0;
        for(int r=0; r<nums.size(); r++){
            if(nums[l]!=nums[r]){
                l++;
                nums[l]=nums[r];
                count++;
                
            }
        }
    return count; 
    }
};