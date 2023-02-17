class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0, top = 0, right = matrix[0].size()-1, down = matrix.size()-1;
        vector<int>ans;
        while(true){
            for(int j=left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            if(top>down) break;
            for(int j=top;j<=down;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            if(right<left) break;
            for(int j=right;j>=left;j--){
                ans.push_back(matrix[down][j]);
            }
            down--;
            if(top>down) break;
            for(int j=down;j>=top;j--){
                ans.push_back(matrix[j][left]);
            }
            left++;
            if(right<left) break;
        }
        return ans;
    }
};