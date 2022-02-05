#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	cin.ignore();
	char arr[n+1];
	cin.getline(arr,n);
	//cin.ignore();
	int maxCount=INT_MIN;
	int currCount=0;
	int st=0,maxst=0;
	int i=0;
	while(1){
		if(arr[i]==' ' || arr[i]=='\0'){
			if(currCount>maxCount){
				maxCount=currCount;
				maxst=st;
			}
			currCount=0;
			st=i+1;
		}
		else
			currCount++;
		if(arr[i]=='\0')
			break;
		i++;
	}
	cout<<maxCount<<endl;
	for(i=0;i<maxCount;i++)
		cout<<arr[i+maxst];
	
	return 0;	
}
