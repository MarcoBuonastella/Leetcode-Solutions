#include<iostream>

using namespace std;

int recursiveMultiply(int a, int b){
	return recursiveMultiplyHelper(a,b,0)
}

int recursiveMultiplyHelper(int a, int b){
	if(b == 0){
		return 0;
	}
	else{
		if(b % 2 != 0){
			return a + recursiveMultiplyHelper(a,b/2) + recursiveMultiplyHelper(a,(b/2);
		}
		else{
			return recursiveMultiplyHelper(a,b/2) + recursiveMultiplyHelper(a,b/2);
		}
	}
		
}

int main(){

	int a = 5;
	int b = 6;
	cout << recursiveMultiply(a,b) <<endl;
	return 0;

}

