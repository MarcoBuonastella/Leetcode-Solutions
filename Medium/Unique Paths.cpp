class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo;
        memo.resize(n, vector<int>(m, 0));
        
        if(m < 1 || n < 1){
            return 0;
        }
        memo[0][0] = 1;
        return uniquePathsHelper(n-1,m-1,memo);
    }
    
    int uniquePathsHelper(int row, int col, vector<vector<int>> &memo){
        if(row >= 0 && row < memo.size() && col >= 0 && col < memo[0].size()){
            if(memo[row][col] == 0){
                memo[row][col] = uniquePathsHelper(row - 1, col, memo) + 
                                 uniquePathsHelper(row, col - 1, memo);
            }  
            return memo[row][col];
        }
        else{
            return 0;
        }
    }
    
};