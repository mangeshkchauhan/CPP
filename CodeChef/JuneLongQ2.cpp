#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T>0)
	{
		int D,d,p,q,x;
		long long sum=0;
		cin>>D>>d>>p>>q;
		long long x=floor(D/d);
		sum+=d*(x*p+q*((x-1)*x)/2);
		sum+=(D%d)*(p+x*q);
		cout<<sum<<endl;
		T--;
	}
	return 0;
}

