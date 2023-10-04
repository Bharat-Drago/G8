#include<iostream>
using namespace std;
void even(int&);
void odd(int&);
int  main(){
   int n=1;
   odd(n);
   return 0;
}
void odd(int &n){
   if(n>20){
      return;
   }
   cout<<n+1<<endl;
   n++;
   even(n);
}
void even(int &n){
   if(20<n){
      return;
   }
   cout<<n-1<<endl;
   n++;
   odd(n);
}