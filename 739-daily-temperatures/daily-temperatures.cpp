class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> output(n,0);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                //using top index directly instead of storing it inside index variable
                output[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return output;
    }
};