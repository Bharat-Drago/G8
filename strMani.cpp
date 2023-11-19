#include<iostream>
#include<string.h>
using namespace std;
class String{
	char a[25];
public:
	String(){
		a[0]='0';
		a[1]='\0';
	}
	String(char *s){
		strcpy(a,s); //deep copy
	}
	void display(){
		cout<<"string : "<<a<<endl;
	}
	String operator +(String obj){
		String temp;
		strcpy(temp.a,a);
		strcat(temp.a,obj.a); //concatenation of two strings
		return temp;
	}
	// >,<,==
	bool operator >(String obj){
		return strcmp(a,obj.a)==1?true:false;
	}
	bool operator <(String obj){
		return strcmp(a,obj.a)==-1?true:false;
	}
	bool operator ==(String obj){
		return strcmp(a,obj.a)==0?true:false;
	}
};
int main(){
	char a[]="Bharat";
	char b[]="Vilas";
	String s1(a);
	String s2(b);
	s1.display();
	s2.display();
	String s3;
	s3=s1+s2;
	s3.display();
	if(s1>s2){
		cout<<"s1 is greater "<<endl;
	}
	else{
		cout<<"s1 is lesser";
	}
	return 0;
}