class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int area = min(height[l], height[r])*(r-l);
            res=max(res, area);  //each time area is compared with the previous ones to get max
            if(height[l]<height[r]){
                l+=1;
            }
            else{
                r-=1;
            }
        }
        return res;
    }
};