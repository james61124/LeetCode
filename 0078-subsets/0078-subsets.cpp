class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>& nums, vector<int>trajectory, int start){
        if(start==nums.size()){
            return;
        }
        for(int i=start; i<nums.size();i++){
            int num = nums[i];
            trajectory.push_back(num);
            ans.push_back(trajectory);
            dfs(nums, trajectory, i+1);
            trajectory.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>trajectory;
        ans.push_back(trajectory);
        dfs(nums, trajectory, 0);
        return ans;
    }
};