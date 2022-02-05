#include<bits/stdc++.h>
using namespace std;

int main(){
	int candles[10]={3,2,1,3};
	int n=sizeof(candles)/sizeof(candles[0]);
	int max=0,count=0;
	for(int i=0;i<n;i++){
		if(candles[i]>max)
		max=candles[i];
	}
	for(int i=0;i<n;i++){
		if(candles[i]==max)
		count++;
	}
	cout<<count;
	return count;
}
