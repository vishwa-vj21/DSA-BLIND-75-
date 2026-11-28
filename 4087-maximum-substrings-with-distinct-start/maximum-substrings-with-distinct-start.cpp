class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> diff;
        for(char &c: s){
            diff.insert(c);
        }
        return diff.size();
    }
};