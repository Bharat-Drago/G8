#include<iostream>
using namespace std;
class number{
	int data;
public:
	number(){
		data=0;
	}
	number(int x){
		data=x;
	}
	void display(){
		cout<<"object value: "<<data<<endl;
	}
	number operator ++(){
		number temp;
		data+=5;
		temp.data=data;
		return temp;
	}
	void operator ++(int){
		data+=3;
	}
	void operator --(){
		data-=4;
	}
	void operator --(int){
		data-=2;
	}
};
int main(){
	number n1(10);
	number n2;
	n2=++n1;
	n1.display();
	++n1;//n1.operator ++();
	n1.display();
	n1++;
	n1.display();
	--n1;
	n1.display();
	n1--;
	n1.display();
	n2.display();
	return 0;
}