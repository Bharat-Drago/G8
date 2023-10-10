#include<iostream>
using namespace std;
class car{
public:
	string b_name;
	string color;
	int price;
	int mileage;
	void print();
};
void car :: print(){
		cout<<"car's Brand : "<<b_name<<endl<<"car's color : "<<color<<endl<<"car's price : "<<price<<endl<<"mileage : "<<mileage<<endl;
	}
int main(){
	car c1;
	c1.b_name="TATA";
	c1.color="Black";
	c1.price=2000000;
	c1.mileage=20;
	c1.print();
	car c2;
	c2.b_name="porsche";
	c2.color="Yellow";
	c2.price=20000000;
	c2.mileage=10;
	c2.print();
	return 0;
}