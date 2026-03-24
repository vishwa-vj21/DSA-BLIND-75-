class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int res=findDays(weights, mid);
            if(res<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int findDays(vector<int>& weights, int capacity){
        int days=1;
        int load=0;
        for(int i=0; i<weights.size(); i++){
            if(load+weights[i]>capacity){
                days+=1;
                load=weights[i]; // start new day with current item
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
};