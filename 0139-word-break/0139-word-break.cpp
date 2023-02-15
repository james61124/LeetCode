class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict{wordDict.begin(), wordDict.end()};
        vector<int>dp(s.size()+1,0);
        dp[0] = 1;
        for(int i=0;i<s.size();i++){
            if(dp[i]==0) continue;
            for(int j = i; j<s.size();j++){
                if(dict.count(s.substr(i, j-i+1))!=0){
                    cout<<s.substr(i, j-i+1)<<endl;
                    dp[j+1]++;
                }
            }
        } 
        return dp[s.size()];                                                                 
    }
};