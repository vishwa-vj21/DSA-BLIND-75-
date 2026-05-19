class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int lmax=0;
        int rmax=0;
        int total=0;
        while(l<r){
            if(height[l]<height[r]){
                lmax=max(height[l], lmax);
                total+=lmax-height[l];
                l++;
                
            }
            else{
                rmax=max(height[r], rmax);
                total+=rmax-height[r];
                r--;
                
            }
        }
        return total;
    }
};