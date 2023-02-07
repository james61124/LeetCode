class Solution {
public:
    
    int binary_search(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(right >= left){
            int mid = left + (right - left) / 2;
            if(nums[mid] > target){
                right = mid - 1;
            }else if(nums[mid] < target){
                left = mid + 1;
            }else {
                return mid;
            }
        }
        return left;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int>LIS;
        LIS.push_back(nums[0]);
        for(auto num : nums){
            if(num <= LIS[LIS.size()-1]){
                int index = binary_search(LIS, num);
                LIS[index] = num;
            }else{
                LIS.push_back(num);
            }
        }
        return LIS.size();
    }
};