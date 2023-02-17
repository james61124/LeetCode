class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int v = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+v);
        reverse(nums.begin()+v, nums.end());
    }
};