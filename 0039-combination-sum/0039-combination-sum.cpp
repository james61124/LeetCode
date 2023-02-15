class Solution {
public:
    void f(vector<int>& candidates, vector<vector<int>>&ans, vector<int>&r, int target, int i){
        if(target==0){
            ans.push_back(r);
        }else{
            while(i<candidates.size()){
                if(target < candidates[i]) break;
                r.push_back(candidates[i]);
                f(candidates, ans, r, target - candidates[i] , i);
                r.pop_back();
                i++;
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>r;
        sort(candidates.begin(), candidates.end());
        f(candidates, ans, r, target, 0);
        return ans;
    }
};

// 7 = 2 + 5 = 1 + f(2) * f(5)
// 5 = 2 + 3 = f(2) * f(3) = 1
// 3 = 2 + 1 = 1