vector<int> findRobotPath(int row, int col){
	vector<int> path;
	vector<vector<int>> memo = vector<vector<int>(row,-1)> (col,-1);
	bool isPath = findRobotPathHelper(row,col,&memo);
	//start at i,j = [row][col] and work backwards and add indexes to path vector
}




bool findRobotPathHelper(int row, int col, vector<vector<int>> &memo){
		if(row == 0 && col == 0){
			memo[row][col] = 1;
			return true;
		}
		if(!(row >= 0 && col >= 0)){
		    return false;
		}
		if(memo[row][col] == -1){
			if(findRobotPathHelper(row - 1, col, memo) || findRobotPathHelper(row, col - 1, memo)){
				memo[row][col] = 1;
				return true;
			}
			else{
				memo[row][col] = 0;
				return false;
			}
		}
		else if(memo[row][col] == 1){
			return true;
		}
		else{
			return false;
		}
}