class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> diff;
        int cnt=0;
        for(char &c: jewels){
            diff.insert(c);
        }
        for(char &c: stones){
            if(diff.count(c)){
                cnt++;
            }
        }
        return cnt;
    }
};