class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> output(temperatures.size());
        stack<int> st;
        for(int i=0; i<temperatures.size(); i++){
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