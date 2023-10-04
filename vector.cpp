#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int arr[5]={2,3,5,7,1};
	int size=(sizeof(arr))/(sizeof(arr[0]));
	cout<<"the size of array : "<<size<<endl;
	vector<int> vec={3,5,8,1,6,2};
	vec.push_back(10);
	vec.push_back(1);
	vec.pop_back();
	int size1=vec.size();

	cout<<"the length of vector :"<<size1<<endl;
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	sort(vec.begin(),vec.end(),greater<int>());
	cout<<endl;
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	return 0;
}
