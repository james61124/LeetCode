class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>>table{{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
        vector<string>ans;
        
        for(int i=0;i<digits.length();i++){
            
            vector<string>tmp;
            if(ans.size()==0){
                for(int k=0;k<table[digits[i]-48-2].size();k++){
                    string s = "";
                    s = s + table[digits[i]-48-2][k];
                    ans.push_back(s);
                }
                continue;
            }
            for(int j=0;j<ans.size();j++){
                for(int k=0;k<table[digits[i]-48-2].size();k++){
                    string s = ans[j] + table[digits[i]-48-2][k];
                    tmp.push_back(s);
                }
            }
            ans = tmp;
        }
        return ans;
    }
};