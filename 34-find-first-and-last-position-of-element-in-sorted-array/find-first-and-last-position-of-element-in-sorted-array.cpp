class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int first=-1; //start
        int last=-1;  //end
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                first=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        l=0;
        r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                last=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return {first, last};
    }
};