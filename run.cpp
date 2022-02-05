#include<bits/stdc++.h>
using namespace std;


int fun(int arr[], int n)
{
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
        cout<<x<<endl;
    }
    return x;
}
int main(){
	int arr[13] = {9, 12, 2, 11, 2, 2, 10, 9, 12, 10, 9, 11, 2};
	int m=fun(arr,13);
	cout<<m;
}


