class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> res(26, 0);
        vector<int> temp=res;
        for(int i=0; i<s.size(); i++){
            res[s[i]-'a']++;
            res[t[i]-'a']--;
        }
        return res==temp;
    }
};