class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=-1;
        int count=0;
        for(int n: nums){
            if(count==0){
                cand=n;
            }
            if(n==cand){
                count++;
            }
            else{
                count--;
            }
        }
        return cand;
    }
};