class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> hm;
        stack<int> st;

        for(int n: nums2){
            while(!st.empty() && n>st.top()){
                hm[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        while(!st.empty()){
            hm[st.top()]=-1;
            st.pop();
        }
        for(int num: nums1){
            res.push_back(hm[num]);
        }
        return res;
    }
};