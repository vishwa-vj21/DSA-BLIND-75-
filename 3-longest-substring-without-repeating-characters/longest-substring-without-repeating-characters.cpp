class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxi=0;
        int maxres=0;
        unordered_map<char, int> freq;
        for(int end=0; end<s.length(); end++){
            freq[s[end]]++;
            maxi++;
            
            while(freq[s[end]]>1){
                freq[s[start]]--;
                start++;
                maxi--;
            }
            maxres=max(maxres, maxi);
        }
        return maxres;
    }
};