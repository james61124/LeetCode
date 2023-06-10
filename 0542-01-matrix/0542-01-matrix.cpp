class Solution {
public:
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>>q;
        stack<pair<int, int>>s;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]!=0) {
                    q.push(make_pair(i,j));
                    s.push(make_pair(i,j));
                    mat[i][j] = numeric_limits<int>::max();
                } 
                else mat[i][j] = 0;
            }
        }
        
        while(q.empty()==0) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int minimum = mat[x][y];
            if(x-1 >= 0 && mat[x-1][y] < minimum) minimum = mat[x-1][y];
            if(y-1 >= 0 && mat[x][y-1] < minimum) minimum = mat[x][y-1];
            if(minimum != numeric_limits<int>::max() && minimum != mat[x][y]) mat[x][y] = minimum + 1;
        }
        
        while(s.empty()==0) {
            int x = s.top().first;
            int y = s.top().second;
            s.pop();
            if(x == mat.size()-1 && y == mat[0].size()-1) continue;
            int minimum = mat[x][y];
            if(x+1 < mat.size() && mat[x+1][y] < minimum) minimum = mat[x+1][y];
            if(y+1 < mat[0].size() && mat[x][y+1] < minimum) minimum = mat[x][y+1];
            if(minimum != numeric_limits<int>::max() && minimum != mat[x][y]) mat[x][y] = minimum + 1;
        }
        return mat;
    }
};