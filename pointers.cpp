#include<iostream>
using namespace std;
int main(){
	int age = 19;
	int *pAge = &age;
	cout<<&age<<" "<< &pAge<<" "<< *pAge<<" "<<pAge<<endl;
	double gpa = 2.7;
	double *pGpa = &gpa;
	string name="Mike";
	string*pName=&name;
	
	cout<<*&*pAge;
	
	
	
	
	return 0;
}
