// Bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++)
			if(arr[j-1]>arr[j])
				swap(arr[j],arr[j-1]);
	}
	
	cout<<"After bubble sort : ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ,";
}

int main(){
	int n=0;
	
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	bubbleSort(arr, n);
	
	return 0;
}
