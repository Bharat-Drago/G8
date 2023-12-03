#include<iostream>
using namespace std;
class base{
public:
	void display(){
		cout<<"inside base class function"<<endl;
	}
	virtual ~base(){
		cout<<"base destructor called"<<endl;
	}
};
class derived: public base{
public:
	void display(){
		cout<<"inside derived class function"<<endl;
	}
	~derived(){
		cout<<"derived destructor called"<<endl;
	}
};
int main(){
	base *b=new derived;
	delete b;
	return 0;
}
