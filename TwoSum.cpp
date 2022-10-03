#include<iostream.h>
using namespace std;

int main(){
    int arr=[1,3,6,8,42,12];
    int target=14;
    int sol=[];
    for(int i=0;i<arr.lengthl;i++){
        for(int j=i+1;j<arr.length;j++){
            if(arr[i]+arr[j]){
                sol[0]=i;
                sol[1]=j;
            }
        }
    }
    cout<<i<<" "<<j;
}