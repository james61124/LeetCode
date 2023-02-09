class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        vector<vector<string>>res;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(s);
        }
        for(auto iter = mp.begin(); iter!=mp.end();iter++){
            res.push_back(iter->second);
        }
        return res;
    }
};