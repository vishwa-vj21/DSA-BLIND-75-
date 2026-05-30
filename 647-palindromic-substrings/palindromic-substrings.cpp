class Solution {
public:
    int countSubstrings(string s) {
        int start=0;
        int maxLen=0;
        int count=0;
        for (int i=0; i<s.length(); i++){
            //odd length
            int l=i;
            int r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                count++;
                l--;
                r++;
            }

            //even length
            l=i;
            r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};