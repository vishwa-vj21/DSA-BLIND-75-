class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        int min_res=high;
        while(low<=high){
            int mid=(low+high)/2;
            int res=capacity_checker(weights, mid);
            if(res<=days){
                min_res=min(min_res, mid);  //store capacity
                high=mid-1;  //check if lesser capacity can be achieved
            }
            else{
                low=mid+1;
            }
        }
        return min_res;
    }
    int capacity_checker(vector<int> &weights, int capacity){
        int bucket=0;
        int days=1;
        for(int w: weights){
            bucket+=w;
            if(bucket>capacity){
                days++;
                bucket=w;
            }
            
        }
        return days;
    }
};