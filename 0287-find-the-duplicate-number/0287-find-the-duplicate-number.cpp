class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0];
        int slow = nums[0];
        fast = nums[nums[fast]];
        slow = nums[slow];
        while(fast!=slow){
            fast = nums[fast];
            fast = nums[fast];
            slow = nums[slow];
        }
        slow = nums[0];
        while(fast!=slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        return fast;
    }
};