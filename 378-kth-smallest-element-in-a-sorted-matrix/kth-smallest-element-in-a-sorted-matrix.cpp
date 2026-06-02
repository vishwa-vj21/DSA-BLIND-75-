class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(helper(matrix, mid, k, n)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    bool helper(vector<vector<int>>& matrix, int target, int k, int n){
        int row=n-1;
        int col=0;
        int count=0;
        while(row>=0 && col<n){
            if(matrix[row][col]<=target){
                count+=(row+1);
                col++;
            }
            else{
                row--;
            }
        }
        return count>=k;
    }
};