#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	int sum=0;
	cin>>n;
	int m=n;
	while(n>0)
	{
		int lastDigit=n%10;
		sum=sum + pow(lastDigit,3);
		n=n/10;
	}
	if(sum==m)
	{
		cout<<"Armstrong";
	}
	else 
	{
		cout<<"Not Armstrong";
	}
}
