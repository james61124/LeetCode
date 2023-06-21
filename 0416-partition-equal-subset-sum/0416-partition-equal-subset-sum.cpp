class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for(auto num: nums) total += num;
        if(total % 2 == 1) return false;
        total /= 2;
        
        vector<bool>dp(total+1, false);
        dp[0] = true;
        for(auto num: nums){
            for(int i=total;i>=num;i--){
                dp[i] = dp[i] || dp[i-num];
            }
        }
        return dp[total];
        
    }
};