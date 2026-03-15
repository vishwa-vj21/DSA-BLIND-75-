class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0; 
        int r=height.size()-1;
        int amount=0;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            amount=max(amount,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return amount;
    }
};