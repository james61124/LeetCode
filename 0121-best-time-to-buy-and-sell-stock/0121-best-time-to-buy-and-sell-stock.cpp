class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 100000;
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min = prices[i];
            }else{
                int profit = prices[i]-min;
                if(profit>max_profit){
                    max_profit = profit;
                }
            }
            
        }
        return max_profit;
    }
};