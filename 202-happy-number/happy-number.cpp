class Solution {
public:
    bool isHappy(int n) {
        int slow=sumOfSquares(n);
        int fast=sumOfSquares(sumOfSquares(n));

        while(slow!=fast){
            slow=sumOfSquares(slow);
            fast=sumOfSquares(sumOfSquares(fast));
            if(slow==1){
                return true;
            }
        }
        return slow==1;
    }

private:
    int sumOfSquares(int n){
        int output=0;
        while(n){
            int digit=n%10;
            digit=digit*digit;
            output+=digit;
            n/=10;
        }
        return output;
    }
};