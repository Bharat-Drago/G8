#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(2);
	pq.push(6);
	pq.push(4);
	pq.push(10);
	pq.push(20);
	pq.push(8);
	pq.push(7);
	pq.push(11);
	while(!pq.empty()){
		cout<<pq.top()<<endl;
		pq.pop();
	}
	
	return 0;
}