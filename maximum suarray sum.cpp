// Array Challenges: Maximum Subarray Sum

#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter size of an array : ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
//	int st,en=0;
//	int subSum=INT_MIN;
//	for(int i=0;i<n;i++){
//		int sum=arr[i];
//		for(int j=i+1;j<n;j++){				// Brute Force technique
//			sum+=arr[j];
//			if(subSum<sum){
//				subSum=sum;
//				st=i+1;
//				en=j+1;
//			}
//		}
//	}
//			
//	cout<<st<<"th position to "<<en<<"th position subarray has maximum sum : "<<subSum;


	int currentSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++){
		currentSum+=arr[i];
		if(currentSum<0)
			currentSum=0;					// Kadane's Algorithm
		maxSum=max(maxSum,currentSum);
	}
	
	cout<<"Maximum subarray sum : "<<maxSum;
	
	return 0;
}
