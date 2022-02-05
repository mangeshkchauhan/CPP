#include<iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int k)
{
		int	mid=low+(high-low)/2;
		if(low>=high){
			return 0;
		}
		else if(arr[mid]==k){
			return 1;
		}
		else if(k<arr[mid]){
			return binarysearch(arr,1,mid-1,k);
		}
		else{
			return binarysearch(arr,mid+1,high,k);
		}
		return -1;
}



int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	
	int found=binarysearch(arr,1,n-1,key);
	cout<<found<<endl;	
}