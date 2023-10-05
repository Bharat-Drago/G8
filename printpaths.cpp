#include<iostream>
#include<vector>
using namespace std;
void helper(vector<vector<int>> &grid,int row,int col,int i,int j,vector<int> vec){
	if(i>=row||j>=col||grid[i][j]==0){
		return;
	}
	vec.push_back(grid[i][j]);
	if(i==row-1&&j==col-1){
		for(int x=0;x<vec.size();x++){
			cout<<vec[x]<<",";
		}
		cout<<endl;
		return;
	}
	helper(grid,row,col,i+1,j,vec);
	helper(grid,row,col,i,j+1,vec);
}
int main(){
	vector<vector<int>> grid={{1,2,0,4,5},{6,7,8,0,10},{11,12,13,14,0},{16,0,18,19,20}};
	int row=grid.size();
	int col=grid[0].size();
	vector<int> vec;
	helper(grid,row,col,0,0,vec);
	return 0;
}