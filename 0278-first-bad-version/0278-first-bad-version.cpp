// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int ans;
    void bst(int left, int right){
        if(right==left){
            ans = right;
            return;
        }
        int middle = left + (right-left) / 2;
        if(!isBadVersion(middle)) bst(middle+1, right);
        else bst(left, middle);
    }
    
    int firstBadVersion(int n) {
        bst(1, n);
        return ans;
    }
};