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
class derived1:protected base{
	int data5;
protected:
	int data6;
public:
	void setdata3(int c){
		data3=c;
	}
	int getdata3(){
		return data3;
	}
	void setdata5(int a){
		data5=a;
	}
	int getdata5(){
		return data5;
	}
};
class derived2:public derived1{
	int data4;
public:
	void setdata2(int b){
		data2=b;
	}
	int getdata2(){
		return data2;
	}
	void setdata4(int d){
		data4=d;
	}
	void setdata6(int d){
		data6=d;
	}
	void setD(int x){
		setdata1(x);
	}
	void display(){
		cout<<getdata1()<<endl;
		cout<<data2<<endl;
		cout<<data3<<endl;
		cout<<data4<<endl;
		cout<<getdata5()<<endl;
		cout<<data6<<endl;
	}
};
int main(){
	derived2 der;
	der.setD(2);
	der.setdata2(4);
	der.setdata3(7);
	der.setdata4(9);
	der.setdata5(5);
	der.setdata6(10);
	der.display();
	return 0;
}