#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[3][3]={{11,2,4},{4,5,6},{10,8,-12}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    cout<<rows<<endl;
    int pdsum=0,sdsum=0;
    int diff;

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(i==j){
                pdsum+=arr[i][j];
                cout<<pdsum<<endl;
            }
            if((i+j)==(rows-1)){
              sdsum+=arr[i][j];
              cout<<sdsum<<endl;
            }
        }
    }
    diff=abs(pdsum-sdsum);
    cout<<diff;
}

