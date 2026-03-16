class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int pos=n-1;
        vector <int> res(n);
        while(l<=r){
            if(abs(nums[l])>=abs(nums[r])){
                res[pos]=nums[l]*nums[l];
                l++;
            }
            else{
                res[pos]=nums[r]*nums[r];
                r--;
            }
            pos--;
        }
        return res;
    }
};