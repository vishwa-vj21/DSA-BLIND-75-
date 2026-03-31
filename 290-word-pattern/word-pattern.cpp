class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> char_word;
        unordered_map<string, char> word_char;
        stringstream ss(s);
        string word;
        int i=0;
        while(ss>>word){
            //its empty or not
            if(pattern.size()==i) return false;
            char c=pattern[i];
            //character->word mapping's valid or not
            if(char_word.count(c) && char_word[c]!=word){
                return false;
            }
            //word->character mapping's valid or not
            if(word_char.count(word) && word_char[word]!=c){
                return false;
            }
            char_word[c]=word;
            word_char[word]=c;
            i++;
        }
        return i==pattern.size();
    }
};