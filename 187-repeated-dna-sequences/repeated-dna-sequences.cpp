class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int start=0;
        string seq="";
        vector<string> res;
        unordered_map<string, int> freq;
        for(int end=0; end<s.length(); end++){
            seq+=s[end];
            while(end-start+1>10){
                seq.erase(0, 1);
                start++;
            }
            if(end-start+1==10){
                freq[seq]++;
            }
        }
        for(auto n: freq){
            if(n.second>1) res.push_back(n.first);
        }
        return res;
    }
};