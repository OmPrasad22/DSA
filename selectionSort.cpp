// Selection sort

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int min=arr[i];
				arr[i]=arr[j];
				arr[j]=min;
			}
		}
	}
	
	cout<<"After selection sort : ";
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
	
	selectionSort(arr, n);
	
	return 0;
}
