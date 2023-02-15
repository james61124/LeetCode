class Solution {
public:
    int rob(vector<int>& nums) {
        int max_rob = 0;
        int first = nums[0];
        if(nums.size()==1) return first;
        int second = max(nums[0], nums[1]);
        max_rob = max(first, second);
        for(int i=2;i<nums.size();i++){
            int cur = first + nums[i];
            max_rob = max(cur, second);
            first = second;
            second = max(cur, second);
        }
        return max_rob;
    }
};