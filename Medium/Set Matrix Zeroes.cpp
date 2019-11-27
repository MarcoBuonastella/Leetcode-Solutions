class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::unordered_map<int,int> rows;
        std::unordered_map<int,int> cols;
        for(int row = 0; row < matrix.size(); row++){
            for(int col = 0; col < matrix[row].size(); col++){
                //if(!(rows.count(row) > 0 && cols.count(col) > 0)){
                    if(matrix[row][col] == 0){
                        if(rows.count(row) == 0){
                            rows.insert(std::pair<int,int>(row,1));
                        }
                        if(cols.count(col) == 0){
                            cols.insert(std::pair<int,int>(col,1));
                        }
                    }
                //}
            }
        }
        
        for(auto it: rows){
            for(int col = 0; col < matrix[0].size(); col++){
                (matrix[it.first][col]) = 0;    
            }
        }
        for(auto& it: cols){
            for(int row = 0; row < matrix.size(); row++){
                (matrix[row][it.first]) = 0;    
            }
        }
    }
};