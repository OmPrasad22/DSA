// Print max and min value of an array

#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter array size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	int minNo=INT_MAX;		// INT_MAX = maxmium value in integer data type
	int maxNo=INT_MIN;		// INT_MIN = minimum value in integer data type
	
	for(int i=0;i<n;i++){
//		if(min>arr[i])
//			min=arr[i];		alternative of these lines are

		minNo=min(minNo,arr[i]);
		
//		if(max<arr[i])
//			max=arr[i];		alternative of these lines are 

		maxNo=max(maxNo,arr[i]);
	}
	
	cout<<"Maximum element of the given array : "<<maxNo<<endl;
	cout<<"Minimum element of the given array : "<<minNo<<endl;
	
	return 0;
}
