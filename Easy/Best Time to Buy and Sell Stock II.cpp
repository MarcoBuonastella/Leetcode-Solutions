class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() == 0){return 0;}
        
        int profits [prices.size()] = {0};
        int max_so_far = 0;
        
        for(int i = 0; i < prices.size(); i++){
            
            for(int j = i; j < prices.size(); j++){
                
                if(prices[j] - prices[i] + max_so_far > profits[j]){
                    profits[j] = prices[j] - prices[i] + max_so_far;
                }     
            }
            
            if(profits[i] > max_so_far){
                max_so_far = profits[i];
            }
            
        }
        return profits[prices.size() - 1];
    }
};