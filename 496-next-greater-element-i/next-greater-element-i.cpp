class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            int idx=-1;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    idx=j;
                    break;
                }
            }
            int nxtgrt=-1;
            for(int j=idx+1; j<nums2.size(); j++){
                if(nums1[i]<nums2[j]){
                    nxtgrt=nums2[j];
                    break;
                }
            }
            ans.push_back(nxtgrt);
        }
        return ans;
    }
};