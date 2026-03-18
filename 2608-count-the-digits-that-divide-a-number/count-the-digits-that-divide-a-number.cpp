class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int original = num;
        while(num){
            int digit=num%10;
            if(original%digit==0){ //check against original number
                count++;
            }
            num/=10;
        }
        return count;
    }
};