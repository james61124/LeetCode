class Solution {
public:
    //2147483648
    int divide(int dividend, int divisor) {
        double check = (double)dividend / 10.0 / (double)divisor;
        if(check > 214748364.7) return 2147483647;
        else if(check < -214748364.8) return -2147483648;
        return dividend / divisor;
    }
};