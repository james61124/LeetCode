class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int node_x, int node_y, int num_island){
        int x = grid.size();
        int y = grid[0].size();
        visited[node_x][node_y] = num_island;
        if(node_x+1<x){
            if(visited[node_x+1][node_y]==0 && grid[node_x+1][node_y]=='1'){
                dfs(grid, visited, node_x+1, node_y, num_island);
            }
        }
        if(node_x-1>=0){
            if(visited[node_x-1][node_y]==0 && grid[node_x-1][node_y]=='1'){
                dfs(grid, visited, node_x-1, node_y, num_island);
            }
        }
        if(node_y+1<y){
            if(visited[node_x][node_y+1]==0 && grid[node_x][node_y+1]=='1'){
                dfs(grid, visited, node_x, node_y+1, num_island);
            }
        }
        if(node_y-1>=0){
            if(visited[node_x][node_y-1]==0 && grid[node_x][node_y-1]=='1'){
                dfs(grid, visited, node_x, node_y-1, num_island);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int x = grid.size();
        int y = grid[0].size();
        vector<vector<int>>visited(x,vector<int>(y,0));
        int num_island = 1;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    dfs(grid, visited, i, j, num_island);
                    num_island++;
                }
            }
        }
        return num_island-1;
    }
};