class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>> arr(m+1, vector<int>(n+1, 0));

        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(text1[i]==text2[j]){
                    arr[i][j]=1+arr[i+1][j+1]; //if it's a match, we add 1 with diagonal value
                }
                else{
                   arr[i][j] = max(arr[i][j + 1], arr[i + 1][j]); //if it's a mismatch we take max when we either move right or down
                }
            }
        }
        return arr[0][0];
    }
};