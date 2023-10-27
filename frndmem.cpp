#include<iostream>
using namespace std;
class shop;
class billing{
public:
	void display(shop &);
};
class shop{
	string item;
	int price;
	public:
		shop(){
			item="";
			price=0;
		}
		shop(string i,int p){
			item=i;
			price=p;
		}
		friend void billing::display(shop&);
};
void billing:: display(shop &obj){
		cout<<"item name : "<<obj.item<<endl;
		cout<<"item price : "<<obj.price<<endl;
	}
int main(){
	shop s1("cookies",20);
	billing b1;
	b1.display(s1);
	return 0;	
}