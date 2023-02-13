class Solution {
public:
    int next_num(int n){
        int sum = 0;
        while(n>0){
            int tmp = n % 10;
            sum = sum + tmp * tmp;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast = n;
        int slow = n;
        while(true){
            fast = next_num(fast);
            fast = next_num(fast);
            slow = next_num(slow);
            if(fast==1 || slow==1) break;
            if(fast==slow) return false;
        }
        return true;
    }
};