class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(), weights.end()); //returns iterator
        int r=accumulate(weights.begin(), weights.end(), 0); //needs initial value
        int res=r;
        while(l<=r){
            int mid=(r+l)/2;
            if(min_capacity(weights, mid, days)){
                res=min(res, mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
    bool min_capacity(vector<int> &weights, int n, int days){
            int bucket=0;
            int count=1;
            for(int i=0; i<weights.size(); i++){
                bucket+=weights[i];
                if(bucket>n){
                    count++;
                    bucket=weights[i];
                }
            }
            return count<=days;
        }
};