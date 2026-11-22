
class Solution {
public:
    bool isPalindrome(int n) {
        int original = n;
        int reverse = 0;

        while(n > 0) {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }

        return original == reverse;
    }

    bool isPalinArray(vector<int> &arr) {
        for(int i = 0; i < arr.size(); i++) {
            if(!isPalindrome(arr[i])) {
                return false;
            }
        }

        return true;
    }
};
