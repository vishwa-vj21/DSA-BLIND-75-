class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> hm;
        vector<int> res;

        for(int n: nums2){
            while(!st.empty() && st.top()<n){
                hm[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        while(!st.empty()){
            hm[st.top()]=-1;
            st.pop();
        }
        for(int n: nums1){
            res.push_back(hm[n]);
        }
        return res;
    }
};