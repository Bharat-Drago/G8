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
	complex addnum(complex* obj1,complex* obj2){
		complex c;
		cout<<obj1->r<<"+"<<obj1->i<<"i"<<endl;
		cout<<obj2->r<<"+"<<obj2->i<<"i"<<endl;
		c.r=obj1->r+obj2->r;
		c.i=obj1->i+obj2->i;
		return c;
	}
	void display(complex c){
		cout<<c.r<<"+"<<c.i<<"i"<<endl;
	}
};
int main(){
	complex c1(2,3);
	complex c2(1,5);
	complex c3;
	c3=c3.addnum(&c1,&c2);
	c1.display(c3);
	return 0;
}