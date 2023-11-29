#include<iostream>
using namespace std;
class parent{
protected:
	int data4;
public:
	
};
class base1:virtual public parent{
protected:
	int data1;
public:
	base1(int a){
		data1=a;
		cout<<"base1 class constructor called"<<endl;
	}
};
class base2:virtual public parent{
protected:
	int data3;
public:
	base2(int a){
		data3=a;
		cout<<"base2 class constructor called"<<endl;
	}
};
class derived :virtual public base2,virtual public base1{
	int data2;
public:
	derived(int a,int b,int c,int d):base2(a),base1(b){
		data2=d;
		data4=c;
		cout<<"derived class constructor called"<<endl;
	}
	void display(){
		cout<<data1<<endl;
		cout<<data2<<endl;
		cout<<data3<<endl;
		cout<<data4<<endl;
	}
};
int main(){
	
	return 0;
}