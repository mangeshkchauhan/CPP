#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={-4,3,-9, 0, 4, 1};
	int n=sizeof(arr)/sizeof(arr[0]);
	float a,b,c;
	a=0;
	b=0;
	c=0;
    float pos,neg,zer;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
			a++;
		}
        if(arr[i]<0){ 
			b++;
		}
        if(arr[i]==0){
			c++;
		}
    }    
    pos=a/n;
    neg=b/n;
    zer=c/n;
    cout<<pos<<endl<<neg<<endl<<zer<<endl;
    return 0;
}

