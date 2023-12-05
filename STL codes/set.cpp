#include<bits/stdc++.h>
using namespace std;

int main(){
	multiset<int> st;
	st.insert(3);
	st.insert(1);
	st.insert(7);
	st.insert(2);
	st.insert(1);
	st.insert(2);
	st.insert(10);
	// unordered_set<int> :: iterator it;
	for(auto it=st.begin();it!=st.end();++it){
		cout<<*it<<" ";
	} 
	st.erase(st.find(2));
	st.erase(7);
	cout<<endl;
	for(int s:st){
		cout<<s<<" ";
	}

	cout<<endl;
	if(st.find(7)!=st.end()){
		cout<<"value found"<<endl;
	}
	else{
		cout<<"value not found"<<endl;
	}
	return 0;
}