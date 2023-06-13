class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        permutate(nums, 0);
        return permutations;
    }
    
    void permutate(vector<int>& nums, int first){
        if(nums.size() == first) {
            permutations.emplace_back(nums);
            return;
        }
        
        for(int i = first; i < nums.size(); ++i) {
            swap(nums[i], nums[first]);
            permutate(nums, first+1);
            swap(nums[i], nums[first]);
        }
    }
    
private:
    vector<vector<int>> permutations;
};