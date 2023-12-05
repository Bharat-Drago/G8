#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,int>> vp;
	vp.push_back({1,2});
	vp.push_back({3,5});
	vp.push_back({4,7});
	vp.push_back({6,8});
	for(int i=0;i<vp.size();i++){
		cout<<vp[i].first<<" "<<vp[i].second<<endl;
	}
	cout<<endl;
	for(pair<int,int> v:vp){
		cout<<v.first<<" "<<v.second<<endl;
	}
	cout<<endl;
	map<int,int> mp;
	mp.insert({3,7});
	mp.insert({3,5});
	mp[2]=4;
	mp[2]=6;
	mp[4]++;
	mp.insert({5,9});
	// mp.erase(2);
	for(auto m:mp){
		cout<<m.first<<" "<<m.second<<endl;
	}
	if(mp.find(1)!=mp.end()){
		cout<<"value found :"<<mp[2]<<endl;
	}
	else{
		cout<<"value not found"<<endl;
	}
	return 0;
}