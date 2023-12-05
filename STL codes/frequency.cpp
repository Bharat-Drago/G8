#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str="ajnixwirnwhncwbrcwabrwaasnxjqhweiuyq";
	map<char,int> mp;
	for(auto s:str){
		mp[s]++;
	}
	for(auto m:mp){
		cout<<m.first<<"->"<<m.second<<endl;
	}
	return 0;
}