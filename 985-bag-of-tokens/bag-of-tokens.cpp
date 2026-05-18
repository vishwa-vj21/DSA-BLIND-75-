class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int l=0;
        int r=tokens.size()-1;
        int score=0;    
        int maxsc=0;
        while(l<=r){
            if(tokens[l]<=power){
                power-=tokens[l];
                score++;
                l++;
            }
            else{
                if(score==0) return maxsc;
                power+=tokens[r];
                score--;
                r--;
            }
            maxsc=max(score, maxsc);
        }
        return maxsc;
    }
};