class Solution {
public:
    vector<vector<int>>ans;
    // void swap(vector<int>& nums, int i, int j){
    //     int tmp = nums[i];
    //     nums[i] = nums[j];
    //     nums[j] = tmp;
    // }
    
    void permutation(vector<int>& nums, int first){
        if(first==nums.size()-1) {
            ans.push_back(nums);
            return;
        }
        for(int i=first;i<nums.size();i++){
            swap(nums[first], nums[i]);
            permutation(nums, first+1);
            swap(nums[first], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0);
        return ans;
        
        
    }
};