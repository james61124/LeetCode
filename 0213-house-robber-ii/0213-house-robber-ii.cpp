class Solution {
public:
    int rob(vector<int>& nums) {
        return max(sub_rob(nums, 0, nums.size()-2), sub_rob(nums, 1, nums.size()-1));
    }
    
    int sub_rob(vector<int>& nums, int start, int end){
        if(start>=nums.size()) return 0;
        int first = nums[start];
        if(start+1>=nums.size()) return nums[start];
        int second = max(nums[start], nums[start+1]);  
        int ans = max(first, second);
        for(int i=start+2; i<=end;i++){
            ans = max(first+nums[i], second);
            first = second;
            second = ans; 
        }
        return ans;
            
    }
};