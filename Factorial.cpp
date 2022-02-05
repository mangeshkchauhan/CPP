#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int factorial=1;
	while(n>1)
	{
		factorial=factorial*(n);
		n--;
		
	}
	cout<<factorial;
}
