#include<iostream>
using namespace std;
class number{
	int num; 
	static int count;
public:
	void input(int x){
		num=x;
		count++;
	}
	void display(){
		cout<<"object "<<count<<" value : "<<num<<endl;
	}
	static void countobj(){
		cout<<"total Objects : "<<count<<endl;
	}
};
int main(){
	number n1,n2;
	n1.input(5);
	n1.display();
	n2.input(6);
	n2.display();
	shop* n3=new number;
	n3->display();
	n1.countobj();
	return 0;
}