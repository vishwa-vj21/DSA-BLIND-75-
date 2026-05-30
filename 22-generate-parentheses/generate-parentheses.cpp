class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        
        string comb="";
        backtrack(0, 0, n, comb);
        return res;
    }

    void backtrack(int open, int close, int n, string comb){
            if(open==n && close==n) res.push_back(comb);
            if(open<n){
                comb+='(';
                backtrack(open+1, close, n, comb);
                comb.pop_back();
            }
            if(close<open){
                comb+=')';
                backtrack(open, close+1, n, comb);
                comb.pop_back();
            }
        }
};