#include<iostream>
using namespace std;

int main()
{
	int n,x;
	int found=false;
	int posi;
 	
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the element to be searched: ";
	cin>>x;
 	
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Entered array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(x==arr[i])
		{
			found=true;
			posi=i;
		}
	}
	
	if(found)
	{
		cout<<"Element "<<x<<" is found at "<<posi+1<<" position.";
	}
	else
	{
		cout<<"Element "<<x<<" not found.";
	}
	return 0;	
}
