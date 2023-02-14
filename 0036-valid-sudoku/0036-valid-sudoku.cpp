class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>row(9,vector<int>(10, 0));
        vector<vector<vector<int>>>box(3,vector<vector<int>>(3,vector<int>(10, 0)));
        for(int i=0;i<board.size();i++){
            vector<int>col(10,0);
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='.') continue;
                int num = board[i][j] - '0';
                if(col[num]==1) return false;
                else col[num] = 1;  
                if(row[j][num]==1) return false;
                else row[j][num] = 1;
                if(box[i/3][j/3][num]==1) return false;
                else box[i/3][j/3][num] = 1;
            }
        }
        return true;
    }
};