// Array Challenges: Maximum Circular Subarray Sum

#include <iostream>
#include <climits>
using namespace std;

int kedane(int arr[], int n){
	int currentSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		currentSum+=arr[i];
		if(currentSum<0)
			currentSum=0;
		maxSum=max(maxSum,currentSum);
	}
	
	return maxSum;
}

int main(){
	int n=0;
	cout<<"Enter size of an array : ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		
	int totalSum=0;						// total sum of array
	
	for(int i=0;i<n;i++){
		totalSum+=arr[i];
		arr[i]=-arr[i];
	}
		
	int nonWrap=kedane(arr,n);			// Non wrapping elements
	
	cout<<"Maximum Circular subarray sum : "<<(totalSum+nonWrap);
		
	return 0;
}
