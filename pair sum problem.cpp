// Array Challenges: Pair sum problem

#include <iostream>
#include <algorithm>
using namespace std;

bool pairsum(int arr[], int n, int k){
	int low=0;		// low pointer which intialize arr[0]
	int high=n-1;	// high pointer which intialize arr[n-1]
	
	while(low<high){
		int sum=arr[low]+arr[high];
		if(sum==k){
			cout<<"\nPosition of elements : "<<low+1<<" & "<<high+1<<endl;
			return true;
		}
		else{						// time: O(n)
			if(sum<k)
				low++;
			else
				high--;
		}
	}
	
	return false;
	
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if((arr[i]+arr[j])==k){
//				cout<<"Position of elements : "<<i+1<<" & "<<j+1<<endl;
//				return true;
//			}
//		}							// time: O(n^2)
//	}
//	
//	return false;

}

int main(){
	int n,k=0;
	cout<<"Enter size of an array : ";
	cin>>n;
	
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		
	cout<<"\nEnter sum of two pair elements which want to search in the given array : ";
	cin>>k;
	
	sort(arr,arr+n);		// Sort array
	
	cout<<"\nAfter sorting the given array :";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	
	if(pairsum(arr,n,k))
		cout<<"\nSum of two pair elements present";
	else
		cout<<"\nSum of two pair elements not present";		
	
		
	return 0;
}
