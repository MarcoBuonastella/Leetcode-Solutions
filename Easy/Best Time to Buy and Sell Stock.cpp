class Solution {
    
// profit is seeling price - buying, where buying comes first
// 
public:
    int maxProfit(vector<int>& prices) {
        
        //store <price bought, profit> pairs of lowest purchase price and profit of max profit deal up to day i
        vector<vector <int>> memo;
        
        if(prices.size() == 0 || prices.size() == 1){
            return 0;
        }
        
        //add day 0 pair
        memo.push_back(vector<int>{prices[0],0});
        
        //go through each day and track max profit up to that day
        for(int i = 1; i < prices.size(); i++){
            
            //found better selling price
            if(prices[i] > memo[i-1][0] + memo[i-1][1]){
                memo.push_back(vector<int>{memo[i-1][0], prices[i] - memo[i-1][0]});            
            }
            
            //found small purchase price, profit unchanged
            else if(prices[i] < memo[i-1][0]){
                memo.push_back(vector<int>{prices[i], memo[i-1][1]});    
            }
            
            //found larger price, but not enough to change profot, do nothing
            else{
                memo.push_back(vector<int>{memo[i-1][0], memo[i-1][1]});    
            }
              
        }
               
        return memo[prices.size() - 1][1];
        
    }
};