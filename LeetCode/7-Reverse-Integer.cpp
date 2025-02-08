class Solution {
public:
    int reverse(int x) {
        int Number=x;
        long long value=0;

        while (Number!=0){
            int remainder=Number%10;
            value=(value*10)+remainder;
            Number/=10;
        }
        if (value<INT_MIN || value>INT_MAX){
            return 0;
        }
        return value;
    }
};