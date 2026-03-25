class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l=0;
        int max_res=0;
        vector<int> hm(256, -1);
        for(int r=0; r<s.length(); r++){
            if(hm[s[r]]!=-1 && hm[s[r]]>=l){
                l=hm[s[r]]+1;
            }
            hm[s[r]]=r;
            int len=r-l+1;
            max_res=max(len, max_res);
    }
    return max_res;
    }
};