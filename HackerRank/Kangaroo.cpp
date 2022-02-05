#include<bits/stdc++.h>
using namespace std;


int main()
{
	int i=1;
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
    if(v1>v2)
    {
        while(x1<x2){
            x1+=v1;
            x2+=v2;
            if(x1==x2)
            {
                cout<<"yes"<<endl;
                cout<<i;
                exit(0);
            }
            i++;
        }
    }
    else{
        cout<<"no"<<endl;
        exit(0);
    }
    cout<<"no"<<endl;
    cout<<i;

}
