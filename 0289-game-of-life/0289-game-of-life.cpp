class Solution {
public:
    //
    int count(vector<vector<int>>& board, int i, int j){
        int ans = 0;
        // cout<<i<<j<<endl;
        if(i-1>=0 && (board[i-1][j]==1 || board[i-1][j]==-1)) ans++;
        // cout<<i<<j<<endl;
        if(j-1>=0 && (board[i][j-1]==1 || board[i][j-1]==-1)) ans++;
        // cout<<i<<j<<endl;
        if(i+1<board.size() && (board[i+1][j]==1 || board[i+1][j]==-1)) ans++;
        // cout<<i<<j<<endl;
        if(j+1<board[0].size() && (board[i][j+1]==1 || board[i][j+1]==-1)) ans++;
        // cout<<i<<j<<endl;

        if(i-1>=0 && j-1>=0 && (board[i-1][j-1]==1 || board[i-1][j-1]==-1)) ans++;
        if(i-1>=0 && j+1<board[0].size() && (board[i-1][j+1]==1 || board[i-1][j+1]==-1)) ans++;
        if(i+1<board.size() && j-1>=0 && (board[i+1][j-1]==1 || board[i+1][j-1]==-1)) ans++;
        if(i+1<board.size() && j+1<board[0].size() && (board[i+1][j+1]==1 || board[i+1][j+1]==-1)) ans++;
        // cout<<ans<<endl;
        return ans;
        
    }

    void gameOfLife(vector<vector<int>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                int count_neighbors = count(board, i, j);
                if(board[i][j]==0){
                    if(count_neighbors == 3) board[i][j] = 2;
                }else{
                    if(count_neighbors < 2 || count_neighbors > 3) board[i][j] = -1;
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==-1) board[i][j] = 0;
                else if(board[i][j]==2) board[i][j] = 1;
            }
        }
    }
};