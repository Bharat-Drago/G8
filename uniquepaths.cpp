#include<iostream>
using namespace std;
int helper(int row,int col,int i,int j){
	if(i>=row||j>=col){
		return 0;
	}
	if(i==row-1&&j==col-1){
		return 1;
	}
	int down=helper(row,col,i+1,j);
	int right=helper(row,col,i,j+1);
	return right+down;
}
int main(){
	int row=5;
	int col=6;
	int count=helper(row,col,0,0);
	cout<<count<<endl;
	return 0;
}