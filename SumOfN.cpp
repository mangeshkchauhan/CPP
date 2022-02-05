#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum=0;
	cin>>n;
	
	for (int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	int sum1=(n*(n+1))/2;
	cout<<sum<<" "<<sum1;
	
	return 0;
}
