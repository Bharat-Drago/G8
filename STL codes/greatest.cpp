#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec={5,2,10,20,11,9,5,8};
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i=0;i<vec.size();i++){
		pq.push(vec[i]);
		if(pq.size()>2){
			pq.pop();
		}
	}
	cout<<pq.top()<<endl;
	int sum=accumulate(find(vec.begin(),vec.end(),2),find(vec.begin(),vec.end(),9),0);
	cout<<"sum :"<<sum<<endl;
	int cnt=count(vec.begin(),vec.end(),5);
	cout<<"count :"<<cnt<<endl;
	return 0;
}