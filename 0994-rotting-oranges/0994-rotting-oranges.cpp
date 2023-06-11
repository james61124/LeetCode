class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int num_of_fresh = 0;
        int t = 0;
        queue<pair<pair<int, int>, int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) num_of_fresh++;
                else if(grid[i][j]==2) q.push(make_pair(make_pair(i, j), 1));
            }
        }
        
        while(!q.empty()){
            if(num_of_fresh==0) break;
            int i = q.front().first.first;
            int j = q.front().first.second;
            t = q.front().second;
            // cout<<i<<" "<<j<<" "<<t<<endl;
            q.pop();
            
            if(i-1>=0 && grid[i-1][j]==1){
                grid[i-1][j]=2;
                num_of_fresh--;
                q.push(make_pair(make_pair(i-1, j), t+1));
            }
            if(j-1>=0 && grid[i][j-1]==1){
                grid[i][j-1]=2;
                num_of_fresh--;
                q.push(make_pair(make_pair(i, j-1), t+1));
            }
            if(i+1<grid.size() && grid[i+1][j]==1){
                grid[i+1][j]=2;
                num_of_fresh--;
                q.push(make_pair(make_pair(i+1, j), t+1));
            }
            if(j+1<grid[0].size() && grid[i][j+1]==1){
                grid[i][j+1]=2;
                num_of_fresh--;
                q.push(make_pair(make_pair(i, j+1), t+1));
            }
                
        }
        
        if(!num_of_fresh) return t;
        else return -1;
    }
};