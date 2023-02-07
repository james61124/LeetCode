class Solution {
public:
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int node_x, int node_y){ 
        int x = heights.size();
        int y = heights[0].size();
        visited[node_x][node_y] = true;
        if(node_x+1<x){
            if(heights[node_x][node_y]<=heights[node_x+1][node_y] && visited[node_x+1][node_y]==false){
                dfs(heights, visited, node_x+1, node_y);
            }
        }
        if(node_x-1>=0){
            if(heights[node_x][node_y]<=heights[node_x-1][node_y] && visited[node_x-1][node_y]==false){
                dfs(heights, visited, node_x-1, node_y);
            }
        }
        if(node_y+1<y){
            if(heights[node_x][node_y]<=heights[node_x][node_y+1] && visited[node_x][node_y+1]==false){
                dfs(heights, visited, node_x, node_y+1);
            }
        }
        if(node_y-1>=0){
            if(heights[node_x][node_y]<=heights[node_x][node_y-1] && visited[node_x][node_y-1]==false){
                dfs(heights, visited, node_x, node_y-1);
            }
        }
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int x = heights.size();
        int y = heights[0].size();
        vector<vector<bool>>p_visited(x,vector<bool>(y,false));
        vector<vector<bool>>a_visited(x,vector<bool>(y,false));
        vector<vector<int>>ans;
        for(int i=0;i<x;i++){
            dfs(heights, p_visited, i, 0);
        }
        for(int i=0;i<y;i++){
            dfs(heights, p_visited, 0, i);
        }
        for(int i=0;i<x;i++){
            dfs(heights, a_visited, i, y-1);
        }
        for(int i=0;i<y;i++){
            dfs(heights, a_visited, x-1, i);
        }
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(p_visited[i][j] && a_visited[i][j]){
                    vector<int>grid{i,j};
                    ans.push_back(grid);
                }
            }
        }
        return ans;
    }
};