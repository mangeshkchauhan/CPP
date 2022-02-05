#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout<<"Enter the string: ";
	getline(cin,str);
	int n;
	cout<<"For upper case enter 1 or\nfor Lower case enter 2: ";
	cin>>n;
	//To upper case
	if(n==1){
		//transform(str.begin(),str.end(),str.begin(),::toupper);
		for(int i=0;i<str.length();i++){
			if(str[i]>='a' && str[i]<='z')
				str[i]-=32;
		}
	}
	//to lower
	else if(n==2){
		//transform(str.begin(),str.end(),str.begin(),::tolower);
		for(int i=0;i<str.length();i++){
			if(str[i]>='A' && str[i]<='Z')
				str[i]+=32;
		}
	}
	cout<<str;
}
