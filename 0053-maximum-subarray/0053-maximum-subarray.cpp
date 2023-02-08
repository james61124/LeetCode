class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max = -100000;
        int res_max = -100000;
        for(auto num : nums){
            curr_max = max(num, num+curr_max);
            res_max = max(curr_max, res_max);
        }
        return res_max;
    }
};