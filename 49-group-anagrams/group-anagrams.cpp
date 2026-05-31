class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hm;
        vector<vector<string>> res;
        for(int i=0; i<strs.size(); i++){
            string word=strs[i];
            sort(word.begin(), word.end());
            hm[word].push_back(strs[i]);
        }
        for(auto &str: hm){
            res.push_back(str.second);
        }
        return res;
    }
};