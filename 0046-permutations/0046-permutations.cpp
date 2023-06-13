class Solution {
public:
    vector<vector<int>>ans;
    
    void dfs(vector<int>&nums, vector<int>visited, vector<int>cur){
        if(cur.size()==nums.size()){
            vector<int>child;
            for(int i=0;i<cur.size();i++){
                child.push_back(nums[cur[i]]);
            }
            ans.push_back(child);
            return;
        }
        
        int index = cur[cur.size()-1];
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                cur.push_back(i);
                visited[i] = 1;
                dfs(nums, visited, cur);
                cur.pop_back();
                visited[i] = 0;
            }
        }
//         for(int i=0;i<graph[index].second.size();i++){
//             int graph_index = graph[index].second[i];
//             // cout<<index<<" "<<graph_index<<endl;
//             if(visited[graph_index]==0){
//                 cur.push_back(graph_index);
//                 visited[graph_index] = 1;
//                 dfs(nums, graph, visited, cur);
//                 cur.pop_back();
//                 visited[graph_index] = 0;
//             }
//             // cur.pop_back();
            
//         }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<pair<int, vector<int>>>graph;
        // for(int i=0;i<nums.size();i++){
        //     vector<int>child;
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j) child.push_back(j);
        //     }
        //     graph.push_back(make_pair(i, child));
        // }
        
        // for(int i=0;i<graph.size();i++){
        //     cout<<graph[i].first<<" ";
        //     for(int j=0;j<graph[i].second.size();j++){
        //         cout<<graph[i].second[j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        
        
        for(int i=0;i<nums.size();i++){
            vector<int>cur;
            vector<int>visited(nums.size(), 0);
            cur.push_back(i);
            visited[i] = 1;
            dfs(nums, visited, cur);
        }
        
        
        return ans;
        
        
    }
};