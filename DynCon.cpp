#include <iostream>
using namespace std;
class array{
	int* p;
	int *n;
public:
	array(){
		p=new int[1]{0};
		n=new int(1);
	}
	array(int* arr,int n){
		p=arr;
		this->n=new int(n);
	}
	void display(){
		for(int i=0;i<*n;i++){
			cout<<p[i]<<endl;
		}
	}
};
int main(){
	int* arr=new int[5]{1,2,3,4,5};
	// int size=sizeof(arr)/sizeof(arr[0]);
	array a(arr,5);
	a.display();
	return 0;
}