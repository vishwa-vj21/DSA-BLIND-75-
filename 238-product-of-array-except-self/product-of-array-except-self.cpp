class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        int post=1;
        int n=nums.size();
        vector <int> res(n, 1);

        for(int i=0; i<nums.size(); i++){
            res[i]=pre;  //adding elements to res from left
            pre*=nums[i];  //prefix num gets multiplied by the element of the array each time
        }
        for(int i=n-1; i>=0; i--){
            res[i]*=post;  //adding elements to res from right
            post*=nums[i];  //postfix num gets multiplied by each element
        }
        return res;
    }
};