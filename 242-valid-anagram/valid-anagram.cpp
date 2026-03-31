class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;
        unordered_map<char, int> anagram;
        
        for(int i=0; i<s.size(); i++){
            anagram[s[i]]++;
            anagram[t[i]]--;
        }
        for(int i=0; i<s.size(); i++){
            if(anagram[s[i]]!=0) return false;
        }
        return true;
    }
};