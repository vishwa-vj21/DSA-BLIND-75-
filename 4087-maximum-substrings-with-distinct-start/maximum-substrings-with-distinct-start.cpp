class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> diff;
        int cnt=0;
        for(char &c: s){
            diff.insert(c);
        }
        return diff.size();
    }
};