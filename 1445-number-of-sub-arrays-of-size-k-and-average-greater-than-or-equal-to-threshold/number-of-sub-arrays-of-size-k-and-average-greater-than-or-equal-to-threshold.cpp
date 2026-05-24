class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int start=0;
        int sum=0;
        int res=0;
        for(int end=0; end<arr.size(); end++){
            sum+=arr[end];
            while(end-start+1>k){
                sum-=arr[start];
                start++;
            }
            if(end-start+1==k && (sum/k>=threshold)){
                res++;
            }
        }
        return res;
    }
};