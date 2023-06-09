class Solution {
public:
    void dfs(vector<vector<int>>& image, vector<vector<int>>& visited, int i, int j, int start_color, int color){
        if(visited[i][j]==1) return;
        else visited[i][j] = 1;
        
        if(image[i][j] == start_color) image[i][j] = color;
        else return;
        
        if(i+1<image.size()) dfs(image, visited, i+1, j, start_color, color);
        
        if(i-1>=0) dfs(image, visited, i-1, j, start_color, color);
        
        if(j+1<image[0].size()) dfs(image, visited, i, j+1, start_color, color);
        
        if(j-1>=0) dfs(image, visited, i, j-1, start_color, color);
        
        
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> visited(image.size(), vector<int>(image[0].size(), 0));
        dfs(image, visited, sr, sc, image[sr][sc], color);
        return image;
    }
};