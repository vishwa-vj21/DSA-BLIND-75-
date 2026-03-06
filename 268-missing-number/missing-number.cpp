class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int tot = n*(n+1)/2;
        for(int n: nums){
            tot-=n;
        }
        return tot;
    }
};