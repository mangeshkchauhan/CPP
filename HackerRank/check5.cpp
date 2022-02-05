#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,3,5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	int a=arr[0],b=arr[0];
	int maximum=0,minimum=0;
	for(int i=0;i<n;i++){
		if(arr[i]>a){
			a=arr[i];
		}
		if(arr[i]<b){
			b=arr[i];
		}
	}
    for(int i=0;i<n;i++){
    	sum+=arr[i];
	}
    minimum=sum-a;
    maximum=sum-b;
    
    
    
    cout<<minimum<<" "<<maximum<<endl;

}
