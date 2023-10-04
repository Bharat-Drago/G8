#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int>> vec2d(3,vector<int>(5,0));
	for(int i=0;i<vec2d.size();i++){
		for(int j=0;j<vec2d[0].size();j++){
			cout<<vec2d[i][j]<<" ";
		}
		cout<<endl;
	}
}