class Solution {
public:
    int ans = 0;
    int f(string s, vector<int>&dp, int i){
        if(i>=s.size()){
            return 1;
        }
        if(dp[i] != -1) return dp[i];
        int res = 0;
        if(stoi(s.substr(i, 1))>=1 && stoi(s.substr(i, 1))<=26){
            res = res + f(s, dp, i+1);
        }
        if(i+1<s.size() && stoi(s.substr(i, 2))>=10 && stoi(s.substr(i, 2))<=26){
            res = res + f(s, dp, i+2);
        }
        dp[i] = res;
        return res;
    }
    
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return f(s, dp, 0);
    }
};