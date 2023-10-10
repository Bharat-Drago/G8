#include<iostream>
using namespace std;
class shop{
public:
	string item;
	int price;
	int quantity;
	string name;
	void input(){
		cout<<"Item's Name : ";
		cin>>item;
		cout<<"Price : ";
		cin>>price;
		cout<<"Quantity : ";
		cin>>quantity;
		cout<<"Buyer's name : ";
		cin>>name;
	}
	void print(){
		cout<<"Item : "<<item<<endl<<"Price : "<<price<<endl<<"Quantity : "<<quantity<<endl<<"Buyer's Name : "<<name<<endl;
	}
	void Total(){
		cout<<"Net Total : "<<quantity*price<<endl;
	}
};
int main(){
	shop sweets;
	sweets.input();
	sweets.print();
	sweets.Total();
	return 0;
}