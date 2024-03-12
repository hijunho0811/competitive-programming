// Date : 2024-03-12
//ispalindrome?
class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        int original = x;
        if (x < 0) {
            return false;
        }
        else{
            while (x != 0) {
                //pop the last digit
                //push the last digit to the back of reverse
                reverse = reverse * 10 + x % 10;
                //remove the last digit
                x = x / 10;
            }
            if (reverse == original) {
                return true;
            }
            else {
                return false;
            }
        }

    }
};