class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> ans;
        int sum=0;
        while(n>0){
            int rem=n%10;
            ans[rem]+=1;
            n/=10;
        }
        for(auto &n: ans){
            sum+=n.first*n.second;
        }
        return sum;
    }
};