#include<bits/stdc++.h>
using namespace std;

int main(){
	int s,t,a,b,m,n,temp1,temp2;
	int x=0,y=0;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	int apples[m],oranges[n];
	for(int i=0;i<m;i++){
		cin>>apples[i];
	}
	for(int i=0;i<n;i++){
		cin>>oranges[i];
	}
	for(int i=0;i<m;i++){
		temp1=apples[i]+a;
		if(s<=temp1&& temp1<=t)
		{
			x++;
		}
	}
	for(int i=0;i<n;i++){
		temp2=oranges[i]+b;
		if(s<=temp2&&temp2<=t){
			y++;
		}
	}
	cout<<x<<endl<<y<<endl;
}
