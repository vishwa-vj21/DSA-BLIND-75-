class Solution {
public:
    int climbStairs(int n) {
        int one=1; //1 step possible
        int two=1; //2 steps possible
        int next=1;
        for(int i=0; i<n-1; i++){ 
            next=one+two;  //we are doing it using bottom up approach
            two=one;
            one=next;
            
        }
        return next;
    }
};