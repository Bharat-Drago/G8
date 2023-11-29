#include<iostream>
using namespace std;
class base{
public:
	virtual void display(){
		cout<<"inside base class function"<<endl;
	}
	virtual void display1()=0;
};
class derived:public base{
public:
	void display(){
		cout<<"inside derived class function"<<endl;
	}
	void display1(){
		cout<<"pure virtual is working"<<endl;
	}
};
int main(){
	base *b;
	derived *d;
	
	derived obj2;
	b=&obj2;
	// d=&obj2;
	b->display();
	b->display1();
	// d->display();
	return 0;
}