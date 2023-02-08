class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cur_max = nums[0];
        int cur_min = nums[0];
        int cur_res = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                int tmp_max = max(nums[i], nums[i]*cur_min);
                int tmp_min = min(nums[i], nums[i]*cur_max);
                cur_max = tmp_max;
                cur_min = tmp_min;
                cur_res = max(cur_res, cur_max);
            }else{
                int tmp_max = max(nums[i], nums[i]*cur_max);
                int tmp_min = min(nums[i], nums[i]*cur_min);
                cur_max = tmp_max;
                cur_min = tmp_min;
                cur_res = max(cur_res, cur_max);
            }
        }
        return cur_res;
    }
};