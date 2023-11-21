#include<iostream>
using namespace std;
class base{
// protected:
// 	int data2;
public:
	int data2;
	display1(){
		cout<<"inside base class"<<endl;
	}
};
class derived1:public base{
public:
	int data3;
	void display(){
		cout<<"inside derived 1 class"<<endl;
	}
};
class derived2:public base{
public:
	int data4;
	void display(){
		cout<<"inside derived 2 class"<<endl;
	}
};
class derived3:public derived1,public derived2{
public:
	void display1(){
		cout<<"inside derived 3 class"<<endl;
	}
	void setadat2(int b){
		derived2::data2=b;
	}
	void dataprint(){
		cout<<derived2::data2<<endl;
		cout<<data3<<endl;
		cout<<data4<<endl;
	}
};
int main(){
	derived3 der;
	der.data3=6;
	der.data4=8;
	der.setadat2(5);
	der.display1();
	der.derived2::display();
	der.dataprint();
}