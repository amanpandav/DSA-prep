class Solution {
public:
    bool isPalindrome(int x) {
        bool status = false;
        int original = x;
        if(x<0){
            return status;
        }
        if(x!=0 && x%10==0){
            return status;
        }
        long reversed = 0;
        while(x>0){
            int last_digit = x % 10;
            reversed = reversed*10 + last_digit; 
            x = x / 10;
        }
        if(reversed==original){
            status = true;
        }
        return status;
    }
};