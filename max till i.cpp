// Array Challenges: Max till i

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n=0;
	
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	int maxNo = INT_MIN;
	
	for(int i=0;i<n;i++){
		maxNo=max(maxNo,arr[i]);
		cout<<"\nMax value till "<<i<<"th index : "<<maxNo;
	}
	
	return 0;
}
