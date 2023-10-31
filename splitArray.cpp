#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int> &arr,int i,int j){
    if(i>=j){
        return 0;
    }
    for(int k=i;k<=j;k++){
        int left=0;
        int right=0;
        for(int x=i;x<=k;x++){
            left+=arr[x];
        }
        for(int x=k+1;x<=j;x++){
            right+=arr[x];
        }
        if(right==left){
            return 1+max(helper(arr,i,k),helper(arr,k+1,j));
        }
    }
    return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<helper(arr,0,n-1)<<endl;
	}
	return 0;
}