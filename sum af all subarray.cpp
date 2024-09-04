// Array Challenges: Sum of all subarray

#include <iostream>
using namespace std;

int main(){
	int n=0;
	
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	cout<<"Sum of all subarrays : ";
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			cout<<sum<<" ,";
		}
		cout<<"\t|\t";
	}
		
	return 0;
}
