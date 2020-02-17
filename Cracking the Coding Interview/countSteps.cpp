int countSteps(int n){
	int memo [n];
	if(n == 1){return 1;}
	if(n == 2){return 2;}
	if(n == 3){return 4;}
	memo[0] = 1;
	memo[1] = 2;
	memo[2] = 4;
	
	for(int i = 3; i < n; i++){
		memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
	}
	
	return memo[n]
}

int main(){

	cout << countSteps(5) <<endl;
	return 0;
}