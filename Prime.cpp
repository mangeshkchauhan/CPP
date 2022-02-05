#include <iostream>
using namespace std;

void isPrime(int n)
{
    bool prime=true;   
	if(n==1||n==0)
	{
		prime=false;
	}
	for(int i=2;i*i<=n;++i)
	{
		if(n%i==0)
		{
			prime=false;
			break;
	    }
	}
	if(prime)
	{
		cout<<"The given numbers "<<n<<" is a prime number."<<endl;
	}
	else
		cout<<"The given number "<<n<<" is not a prime number"<<endl;
}
int main(){
	
	int n;
	cout<<"Enter a number to check Prime status: ";
	cin>>n;
	isPrime(n);
	
	return 0;
}
