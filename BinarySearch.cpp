#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int binarysubject(int arr[],int n,int k){
			int low=0;
			int high=n-1;
			int mid;
			while(low<=high){
				mid=low+(high-low)/2;
				if(arr[mid]==k){
					return 1;
				}
				else if(k<arr[mid]){
					high=mid-1;
				}
				else{
					low = mid+1;
				}
			}
			return 0;
		}
};



int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int key;
	cin>>key;
	Solution ob;
	
	int found=ob.binarysubject(arr,n,key);
	cout<<found<<endl;
	
	
	
	
}
