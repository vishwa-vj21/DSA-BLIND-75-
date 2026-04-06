class Solution {
public:
    string simplifyPath(string path) {
        //instead of using stack directly, we use vector as a stack
        vector<string> st;
        string temp="";

        for(int i=0; i<=path.size(); i++){
            if(i==path.size()|| path[i]=='/'){
                if(temp=="." || temp=="") {
                    
                }
                else if(temp==".."){
                    if(!st.empty()) st.pop_back();
                }
                else{
                    st.push_back(temp);
                }
                temp="";
            }
            else{
                temp+=path[i];
            } 
        }
        string ans="";
        for(string s: st){
            ans+="/"+ s;
        }
        return ans.empty()? "/": ans;
    }
};