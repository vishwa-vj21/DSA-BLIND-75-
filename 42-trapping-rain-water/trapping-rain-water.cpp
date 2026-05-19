class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> suffixsum(n);
        int total=0;
        suffixsum[n-1]=height[n-1];
        for(int i=n-2; i>=0; i--){
            suffixsum[i]=max(height[i], suffixsum[i+1]);
        }
        int prefixsum=0;
        for(int i=0; i<n; i++){
            int prefixsum=max(prefixsum, height[i]);
            total+=min(prefixsum, suffixsum[i])-height[i];
            
        }
        return total;
    }
};