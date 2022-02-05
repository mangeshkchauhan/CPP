#include<bits/stdc++.h>
using namespace std;

int main(){
	int unit;
	float charge,scharge;
	string name[20];
	cout<<"Enter Name : ";
	cin.getline(name,20);
	cout<<"Enter No. of units consumed : ";
	cin>>unit;
	if(unit<=100){
		charge = 0.60*unit;
	}
	else if(unit>100&&unit<=300){
		charge=100*0.60+(unit-100)*0.80;
	}
	else if(unit>300){
		charge=100*0.60+(200)*0.80+(unit-300)*0.90;
	}
	charge+=50;
	if(charge>300){
		scharge=charge*0.15;
		charge+=scharge;
	}
	cout<<"Electricity Bill "<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Bill : "<<charge<<endl;
	
	return 0;
}
