#include<iostream>
using namespace std;
class base{
	int data1;
protected:
	int data2;
public:
	int data3;
	void setdata1(int a){
		data1=a;
	}
	int getdata1(){
		return data1;
	}
};
class derived:public base{
	int data4;
protected:
	int data5;
public:
	void setdata2(int b){
		data2=b;
	}
	void setdata4(int d){
		data4=d;
	}
	int getdata2(){
		return data2;
	}
	void setdata5(int e){
		data5=e;
	}
	void display(){
		cout<<getdata1()<<endl;
		cout<<data2<<endl;
		cout<<data3<<endl;
		cout<<data4<<endl;
		cout<<data5<<endl;
	}

};
int main(){
	derived der;
	der.setdata1(2);
	der.setdata2(6);
	der.data3=5;
	der.setdata4(7);
	der.setdata5(8);
	der.display();
	return 0;
}