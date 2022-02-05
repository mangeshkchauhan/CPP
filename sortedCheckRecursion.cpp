#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
	if(n==1){
		return true;
	}
	return (arr[0]<arr[1] && sorted(arr+1,n-1));
}
int main( ){
	int arr[]={1,2,3,4,5,6,3425324};
	int n=7;
	cout<<sorted(arr,n)<<endl;
}
