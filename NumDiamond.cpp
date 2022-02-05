#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int space =n-1;     
	
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
		space--;
	}
	space=0;
	for(int i=n-1;i>0;i--)
	{
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
		space++;
	}
	
}
/*
5
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

