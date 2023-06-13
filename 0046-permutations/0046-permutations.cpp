class Solution {
public:
    vector<vector<int>>ans;
    
//     void dfs(vector<int>&nums, vector<int>visited, vector<int>cur){
//         if(cur.size()==nums.size()){
//             ans.push_back(cur);
//             return;
//         }
        
//         for(int i=0;i<nums.size();i++){
//             if(visited[i]==0){
//                 cur.push_back(nums[i]);
//                 visited[i] = 1;
//                 dfs(nums, visited, cur);
//                 cur.pop_back();
//                 visited[i] = 0;
//             }
//         }
//     }
    
    void swap(vector<int>& nums, int i, int j){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
    
    void permutation(vector<int>& nums, int first){
        if(first==nums.size()-1) {
            ans.push_back(nums);
            return;
        }
        for(int i=first;i<nums.size();i++){
            swap(nums, first, i);
            permutation(nums, first+1);
            swap(nums, first, i);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0);
        // for(int i=0;i<nums.size()-1;i++){
        //     swap(nums, 0, i);
        //     permutation(nums, 1);
        //     swap(nums, 0, i);
        // }
        // for(int i=0;i<nums.size();i++){
        //     vector<int>cur;
        //     vector<int>visited(nums.size(), 0);
        //     cur.push_back(nums[i]);
        //     visited[i] = 1;
        //     dfs(nums, visited, cur);
        // }
        
        return ans;
        
        
    }
};