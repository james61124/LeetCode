class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int x, int y, int i){
        char c = board[x][y];
        board[x][y] = '*';
        if(i==word.size()-1) return true;
        if(x-1>=0 && board[x-1][y]==word[i+1]){
            if(dfs(board, word, x-1, y, i+1)) return true;
        }
        if(x+1<board.size() && board[x+1][y]==word[i+1]){
            if(dfs(board, word, x+1, y, i+1)) return true;
        }
        if(y-1>=0 && board[x][y-1]==word[i+1]){
            if(dfs(board, word, x, y-1, i+1)) return true;
        }
        if(y+1<board[0].size() && board[x][y+1]==word[i+1]){
            if(dfs(board, word, x, y+1, i+1)) return true;
        }
        board[x][y] = c;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(dfs(board, word, i, j, 0)) return true;
                }
                
            }
        }
        return false;
    }
};