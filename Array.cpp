 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int n;
 	cin>>n;
  	int arr[n];
  	

 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];
	}
	
	int maxN=arr[0];
	int minN=arr[0];
	
	for(int i=0;i<n;i++)
 	{
 		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	for(int i=0;i<n;i++)
	 {
	 	if(arr[i]>maxN){
	 		
		 	maxN=arr[i];
		 }
		 if(arr[i]<minN){
	 		minN=arr[i];
		 }
	 }
 
	cout<<"Maximum element is: "<<maxN<<endl;
	cout<<"Minimum element is: "<<minN<<endl;
	
	int maxNum=arr[0];
	int minNum=arr[0];
		

	for(int i=0;i<n;i++)
	{
		maxNum=max(maxNum,arr[i]);
		minNum=min(minNum,arr[i]);
	}

	cout<<"(Fn)Maximum element is: "<<maxNum<<endl;
	cout<<"(Fn)Minimum element is: "<<minNum<<endl;

	return 0;
}
 
