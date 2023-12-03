#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class number{
	T a;
	T b;
public:
	number(T x,T y){
		a=x;
		b=y;
	}
	void display(){
		cout<<a<<" "<<b<<endl;
	}
};
template<typename T>
T fun(T a,T b){
	return a+b;
}
int main(){
	cout<<fun('a','b')<<endl;
	
	number<int> n1('x','y');
	n1.display();
	return 0;
}