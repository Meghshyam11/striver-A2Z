class Solution {
public:
    bool isPalindrome(int x) {
        ios::sync_with_stdio(false); 
        cin.tie(0);
         cout.tie(0);
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};