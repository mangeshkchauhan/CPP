#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T>0){
		int a,b,A,B;
		cin>>a>>b>>A>>B;
		int ans=ceil(A/a)+ceil(B/b);
		cout<<ans<<endl;
		T--;
	}
	return 0; 
}
