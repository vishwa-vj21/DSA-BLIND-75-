class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> output(n,0);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                int index=st.top();
                st.pop();
                output[index]=i-index;
            }
            st.push(i);
        }
        return output;
    }
};