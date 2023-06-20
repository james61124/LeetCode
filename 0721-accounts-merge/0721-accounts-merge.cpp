class Solution {
public:
    int find(vector<int>&all_account, int a){
        int i = a;
        while(true){
            if(all_account[i]==i) return i;
            else i = all_account[i];
        }
    }
    
    void change_root(vector<int>&all_account, int a, int b){
        all_account[find(all_account, a)] = all_account[find(all_account, b)];
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        vector<int>all_account(accounts.size());
        unordered_map<string, int>mp;
        vector<vector<string>>ans;
        unordered_map<int, set<string>>table;
        unordered_map<int, string>name_table;
        for (int i = 0; i < accounts.size(); i++) {
            all_account[i] = i;
        }
        
        for(int i=0;i<accounts.size();i++){
            for(int j=1;j<accounts[i].size();j++){
                if(mp.count(accounts[i][j])==0){
                    mp[accounts[i][j]] = i;
                }else{
                    change_root(all_account, mp[accounts[i][j]], i);
                }
            }
        }
        
        for(int i=0;i<accounts.size();i++){
            for(int j=1;j<accounts[i].size();j++){
                int index = find(all_account, i);
                name_table[index] = accounts[index][0];
                table[index].insert(accounts[i][j]);
            }
        }
        
        for(int i=0;i<all_account.size();i++){
            int index = find(all_account, i);
            name_table[index] = accounts[index][0];
            table[index].insert(accounts[i].begin()+1, accounts[i].end());
        }
        
        for (const auto& [index, emails] : table) {
            vector<string>name{name_table[index]};
            name.insert(name.end(), emails.begin(), emails.end());
            ans.push_back(name);
        }
        
        return ans;
    }
};