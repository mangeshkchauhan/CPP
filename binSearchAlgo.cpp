#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n,curr,key;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++){
		cin>>curr;
		v.push_back(curr);
	}
	cout<<"Enter the key element to be found: ";
	cin>>key;
	cout<<key<<" is found or not: "<<binary_search(v.begin(),v.end(),key)<<endl;
	 
	
}
