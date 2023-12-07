#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	st.push(2);
	st.push(1);
	st.push(5);
	st.push(3);
	st.push(8);
	st.push(12);
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
	
	return 0;
}