#include<iostream>
using namespace std;
class shapes{
protected:
	int side;
public:
	shapes(int x){
		side=x;
	}
	void getarea(){
		cout<<"inside shape class"<<endl;
	}
};
class square:public shapes{
protected:

public:
	square(int s):shapes(s){

	}
	void getarea(){
		cout<<"square area :"<<side*side<<endl;
	}
};
class circle:public shapes{
protected:

public:
	circle(int r):shapes(r){

	}
	void getarea(){
		cout<<"circle area :"<<3.14*side*side<<endl;
	}
};
int main(){
	square s1(3);
	circle c1(6);
	s1.getarea();
	c1.getarea();
	return 0;
}