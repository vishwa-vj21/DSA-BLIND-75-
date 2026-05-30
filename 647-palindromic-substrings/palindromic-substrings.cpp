class Solution {
public:
    int countSubstrings(string s) {
        int start=0;
        int count=0;
        for (int i=0; i<s.length(); i++){
            int l=i;
            int r=i;
            count+=isPal(l, r, s);
            l=i;
            r=i+1;
            count+=isPal(l, r, s);
        }
        return count;
    }
    int isPal(int l, int r, string s){
        int count=0;
        while(l>=0 && r<s.length() && s[l]==s[r]){
            count++;
            l--;
            r++;
        }
        return count;
    }
};