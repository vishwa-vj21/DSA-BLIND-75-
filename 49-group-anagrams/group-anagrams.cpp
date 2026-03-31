class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hm;
        for(int i=0; i<strs.size(); i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            hm[word].push_back(strs[i]); 
        }
        vector<vector<string>> result;
        for(auto &w : hm){
            result.push_back(w.second);
        }
        return result;
    }
};