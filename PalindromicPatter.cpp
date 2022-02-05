#include<iostream>
using namespace std;

int main()
{
	int n,x,y;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++)
		{
			cout<<"  ";
		}
		
		x=i;
		for(;j<=n;j++)
		{
			cout<<x<<" ";
			x--;
		}
		
		y=2;
		for(;j<=n+i-1;j++)
		{
		
			cout<<y<<" ";
			y++;
		}
		cout<<endl;
	}
	return 0;
}
