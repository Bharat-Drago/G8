#include<iostream>
using namespace std;
class number{
	
public:
	int num;
	number(int x=0){
		num=x;
	}
	void display(){
		cout<<"data : "<<num<<endl;
	}
	operator int(){
		return num;
	}
};
class fun{
	
public:
	int data;
	fun(int x=0){
		data=x;
	}
	void display(){
		cout<<"fun class data : "<<data<<endl;
	}
	void  operator =(number obj){
		data=obj.num;
	}
};
int main(){
	number n1=20;
	fun f1;
	n1.display();
	int x=n1;
	f1=n1;
	cout<<x<<endl;
	f1.display();
	return 0;
}