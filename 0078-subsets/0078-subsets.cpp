class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>& nums, map<int, int>visit, vector<int>trajectory, int start){
        if(start==nums.size()){
            return;
        }
        for(int i=start; i<nums.size();i++){
            int num = nums[i];
            if(visit[num]==0){
                visit[num] = 1;
                trajectory.push_back(num);
                ans.push_back(trajectory);
                dfs(nums, visit, trajectory, i+1);
                visit[num] = 0;
                trajectory.pop_back();
            }
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        map<int, int>visit;
        vector<int>trajectory;
        for(auto num: nums){
            visit[num] = 0;
        }
        ans.push_back(trajectory);
        dfs(nums, visit, trajectory, 0);
        return ans;
    }
};