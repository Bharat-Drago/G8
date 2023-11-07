#include<iostream>
using namespace std;
class complex{
	int r;
	int i;
public:
	complex(){
		r=0;
		i=0;
	}
	complex(int r,int i){
		this->r=r;
		this->i=i;
	}
	void display(){
		cout<<r<<"+"<<i<<"i"<<endl;
	}
	friend complex operator +(complex,complex);
	complex operator -(complex obj){
		complex temp;
		temp.r=r-obj.r;
		temp.i=i-obj.i;
		return temp;
	}
};
complex operator +(complex obj1,complex obj2){
		complex temp;
		temp.r=obj1.r+obj2.r;
		temp.i=obj1.i+obj2.i;
		return temp;
	}
int main(){
	complex c1(2,3);
	c1.display();
	complex c2(5,-1);
	c2.display();
	complex c3;
	c3=c1-c2;  //c1.+(c2);
	c3.display();
	complex c4;
	c4=c1+c2+c3;
	c4.display();
	return 0;
}