class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int count=0;
        for(int i=0; i<n+1; i++){
            int temp=i;
            while(temp){
                temp=temp&(temp-1);
                count+=1;
            }
            res.push_back(count);
            count=0;
        }
        return res;
    }
};