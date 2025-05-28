class Solution {
public:
    bool isPalindrome(int x) {

        string str = to_string(x);

        int low = 0;
        int high = str.size() - 1;

        while (low < high) {
            if (str[low] != str[high]) {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};

/*
class Solution {
public:
    bool isPalindrome(int x) {
        int value = x;
        long result = 0;
        while (value != 0) {
            int remainder = value % 10;
            result = (result * 10) + remainder;
            value /= 10;
        }
        if (x < 0) {
            return false;
        }
        return (result == x);
    }
};
*/