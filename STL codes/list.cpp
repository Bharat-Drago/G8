#include<bits/stdc++.h>
using namespace std;

int main(){
	list<int> li(3,2);
	li.push_back(4);
	li.push_front(5);
	li.remove(2);
	li.insert(li.begin(),2,2);
	list<int> :: iterator it=li.begin();
	for(auto l:li){
		cout<<l<<" ";
	}
	cout<<endl;
	return 0;
}