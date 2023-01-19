class Solution {
public:
    map<int,int>table;
    int min_number_of_coins(vector<int>num_of_coins){
        int all_fail = 1;
        int min = 2147483647;
        for(int i=0;i<num_of_coins.size();i++){
            if(num_of_coins[i]!=-1){
                all_fail = 0;
            }
            if(num_of_coins[i]<min && num_of_coins[i]!=-1){
                min = num_of_coins[i];
            }
        }
        if(all_fail==1){
            return -1;
        }else{
            return min;
        }
        
    }
    int amounts(vector<int>& coins, int left){
        if(left==0){
            return 0;
        }
        if(left<0){
            return -1;
        }
        vector<int>number_of_coins;
        for(int i=0;i<coins.size();i++){
            if(table.find(left-coins[i])==table.end()){
                int tmp_amounts = amounts(coins,left-coins[i]);
                table[left-coins[i]] = tmp_amounts;
                number_of_coins.push_back(tmp_amounts);
            }else{
                number_of_coins.push_back(table[left-coins[i]]);
            }
            // number_of_coins.push_back(amounts(coins,left-coins[i]));
        }
        int ans = min_number_of_coins(number_of_coins);
        if(ans==-1){
            return -1;
        }else{
            return ans + 1;
        }
    }
    
    int coinChange(vector<int>& coins, int amount) {
        return amounts(coins,amount);
    }
};