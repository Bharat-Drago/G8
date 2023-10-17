#include<iostream>
using namespace std;
class car{
	int price;
	string brand;
	string color;
	int i;
public:
	car(){
		price=0;
		brand="";
		color="";
		i=0;
	}
	car(int p,string b,string c,int n){
		price=p;
		brand=b;
		color=c;
		i=n;
	}
	car(car &c){
		price=c.price;
		brand=c.brand;
		color=c.color;
		i=c.i;
	}
	~car(){
		cout<<i<<" : ";
		cout<<"object destroyed"<<endl;
	}
	void display() const{
		cout<<"car price : "<<price<<endl;
		cout<<"car brand : "<<brand<<endl;
		cout<<"car color : "<<color<<endl;
		cout<<"object no. : "<<i<<endl;
		cout<<endl;
	}

};
int main(){
	const car c1(2500000,"Jeep","Black",1);
	car c2;
	car c3(5000000,"Fortuner","pink",3);
	car* c4=new car(4000000,"BMW","white",4);
	c1.display();
	c2.display();
	c3.display();
	c4->display();
	return 0;
}