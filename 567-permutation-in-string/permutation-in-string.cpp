class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int start=0;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for(int i=0; i<s1.size(); i++){
            freq1[s1[i]-'a']++;
        }
        for(int end=0; end<s2.size(); end++){
            freq2[s2[end]-'a']++;
            if(end-start+1>s1.size()){
                freq2[s2[start]-'a']--;
                start++;
            }
            if(end-start+1==s1.size()){
                if(freq1==freq2) return true;
            }
        }
        return false;
    }
};