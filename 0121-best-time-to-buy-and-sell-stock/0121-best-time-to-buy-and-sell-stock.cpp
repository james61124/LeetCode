class Solution {
public:
    int maxProfit(vector<int>& prices) {
        map<int,int>table;
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            if(table.find(prices[i])!=table.end()){
                table[prices[i]]++;
            }else{
                table[prices[i]] = 1;
            }
        }
        // for(auto iter = table.begin();iter!=table.end();iter++){
        //     cout<<*iter<<endl;
        // }
        for(int i=0;i<prices.size();i++){
            // cout<<i<<endl;
            int max_income = table.rbegin()->first;
            int profit = max_income - prices[i];
            if(profit>max_profit){
                max_profit = profit;
            }
            if(table[prices[i]]==1){
                table.erase(prices[i]);
            }else{
                table[prices[i]]--;
            }
            
            
        }
        return max_profit;
    }
};