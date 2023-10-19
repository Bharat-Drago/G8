#include<iostream>
using namespace std;
class student1{
	string noodles;
	string coockies;
	string chips;
public:
	student1(){
		noodles="";
		coockies="";
		chips="";
	}
	student1(string n,string co,string ch){
		noodles=n;
		coockies=co;
		chips=ch;
	}
	friend class student2;
	friend void display1(student1&);
};
class student2{
public:
	void display(student1 &obj){
		cout<<"student1 noodles : "<<obj.noodles<<endl;
		cout<<"student1 coockies : "<<obj.coockies<<endl;
		cout<<"student1 chips : "<<obj.chips<<endl;
		cout<<endl;
			
	}
};
void display1(student1 &obj){
		cout<<"student1 noodles : "<<obj.noodles<<endl;
		cout<<"student1 coockies : "<<obj.coockies<<endl;
		cout<<"student1 chips : "<<obj.chips<<endl;
		cout<<endl;
			
	}
int main(){
	student1 krishna("maggie","50-50","doritos");
	student1 bhumi("yippie","oreo","lays");
	
	student2 harsh;
	harsh.display(krishna);
	display1(bhumi);
	return 0;
}