#include<iostream>
using namespace std;
class second;
class first{
	int a;
public:
	first(){
		a=0;
	}
	first(int x){
		a=x;
	}
	friend void display(first&,second&);
};
class second{
	int b;
public:
	second(){
		b=0;
	}
	second(int y){
		b=y;
	}
	friend void display(first&,second&);
};
void display(first &obj1,second &obj2){
	cout<<"first class object : "<<obj1.a<<endl;
	cout<<"second class object : "<<obj2.b<<endl;
	cout<<endl;	
}
int main(){
		first f1(7);
		second s1(9);
		display(f1,s1);
	return 0;
}