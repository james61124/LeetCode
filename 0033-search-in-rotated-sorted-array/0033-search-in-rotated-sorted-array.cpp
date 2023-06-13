class Solution {
public:
    int bst(vector<int>& nums, int target, int left, int right){
        while(left<=right){
            int mid = left + (right-left) / 2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[left] && nums[mid]>nums[right]){
                if(nums[left]<=target && target<nums[mid]){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }else{
                if(nums[mid]<target && target<=nums[right]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
            
        }
        return -1;
        
    }
    
    int search(vector<int>& nums, int target) {
        return bst(nums, target, 0, nums.size()-1);
    }
};