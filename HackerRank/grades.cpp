#include<bits/stdc++.h>
using namespace std;

int main(){ 
	int n;
	cin>>n;
	int grade;
	for(int i=0;i<=n;i++){
		cin>>grade;
		if(grade>37)
		{
			if(grade%5>2){
				grade+=5-grade%5;
			}
		}
    	cout<<grade<<endl;
	}
}

