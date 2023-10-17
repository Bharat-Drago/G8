#include<iostream>
using namespace std;
class shop{
	string item;
	int price;
	int quantity;
public:
	void input(string i,int p,int q){
		item=i;
		price=p;
		quantity=q;
	}
	void display(){
		cout<<"item name : "<<item<<endl;
		cout<<"item price : "<<price<<endl;
		cout<<"item quantity : "<<quantity<<endl;
	}
};
int main(){
	shop s1;
	s1.input("chocolate",20,5);
	shop* s2=new shop;
	s1.display();
	s2->input("laddu",10,10);
	s2->display();
	return 0;
}