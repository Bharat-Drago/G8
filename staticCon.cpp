#include <iostream>
using namespace std;
class number{
	int data;
	static int count;
public:
	number(){
		data=0;
		count++;
	}
	number(int x){
		data=x;
		count++;
	}
	~number(){
		cout<<"Object destroyed"<<endl;
		count--;
	}
	void display(){
		cout<<"object : "<<data<<endl;
		cout<<"object number : "<<count<<endl;
	}
	static void D_count(){
		cout<<"Total object : "<<count<<endl;
	}
};
int number::count=0;
int main(){
	number n1(3);
	n1.display();
	number n2(5);
	n2.display();
	number n3;
	n3.display();
	number* n4=new number(9);
	n4->display();
	n1.D_count();
	number::D_count();
	return 0;
}