class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int SetRowZero = 0;
        int SetColZero = 0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0){
                SetColZero = 1;
                break;
            }
        }
        for(int i=0;i<matrix[0].size();i++){
            if(matrix[0][i]==0){
                SetRowZero = 1;
                break;
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++){
            if(matrix[i][0]==0){
                for(int j=1;j<matrix[i].size();j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i=1;i<matrix[0].size();i++){
            if(matrix[0][i]==0){
                for(int j=1;j<matrix.size();j++){
                    matrix[j][i] = 0;
                }
            }
        }
        if(SetColZero){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0] = 0;
            }
        }
        if(SetRowZero){
            for(int i=0;i<matrix[0].size();i++){
                matrix[0][i] = 0;
            }
        }
    }
};