class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1, 0);
        int offset=1;

        for(int i=1; i<=n; i++){  //dp[0]=0, we only touch the remaining from 1 to n
            if(offset*2==i){  //offset gets updated if the msb increases
                offset=i;
            }
            dp[i]=1+dp[i-offset];
        }
        return dp;

    }
};