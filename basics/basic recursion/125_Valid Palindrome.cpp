class Solution {
public:
    bool isPalindrome(string s) {
        string a;

        for (char c:s){
            if(isalnum(c)){
                a+= tolower(c);
            }
        }
        int left=0;
        int right=a.size()-1;

        while(left<right){
            if(a[left]!=a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};