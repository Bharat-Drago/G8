#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<char> vec(6,'A');
	vector<vector<int>> vec1(5,vector<int>(4,1));
	for(int i=0;i<vec1.size();i++){
		for(int j=0;j<vec1[0].size();j++){
			cout<<vec1[i][j]<<" ";
		}
		cout<<endl;
	}
	vector<int> vec2(5,0);
	vec2.push_back(4);
	vec2.insert(vec2.begin()+2,3,6);
	for(int i=0;i<vec2.size();i++){
		cout<<vec2[i]<<" ";
	}
	cout<<endl<<endl;

	// cout<<vec2.empty()<<endl;
	vector<int> :: iterator it;
	for(it=vec2.begin();it!=vec2.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl<<endl;
	for(auto v:vec){
		cout<<v<<" ";
	}
	return 0;
}