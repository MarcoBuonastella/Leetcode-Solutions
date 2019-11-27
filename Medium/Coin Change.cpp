class Solution {
public:
    
    //idea go from amount = 1 ... amount
    //min coins for amount at each step is min memo[amount - coin[i]] for all coins i = 0..n
    //if min is 0, memo[amount = 0]
    
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo = vector<int>(amount + 1,-1);
        memo[0] = 0;
        
        for(int i = 1; i <= amount; i++){
            int min = INT_MAX;
            for(int j = 0; j < coins.size(); j++){
                if(i - coins[j] >= 0 && i - coins[j] <= amount && memo[i-coins[j]] != -1){
                    if(memo[i-coins[j]] < min){
                        min = memo[i-coins[j]] + 1;
                    }
                }    
            }
            if(min != INT_MAX){
                memo[i] = min;
            }
        }
        
        //if(memo[amount] == 0){ return -1;}
        return memo[amount];
        
        
    }
};