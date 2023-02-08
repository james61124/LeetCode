class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int max_profit = 0;
        while(right<prices.size()){
            if(prices[left] > prices[right]){
                left = right;
                right++;
            }else{
                int profit = prices[right] - prices[left];
                if(profit>max_profit){
                    max_profit = profit;
                }
                right++;
            }
        }
        return max_profit;
    }
};