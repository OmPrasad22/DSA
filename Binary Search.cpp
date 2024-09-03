// Binary search

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int start, int mid, int end, int key){
	int m=(start+end)/2;
	if(key==arr[mid])
		return mid;
	else if(key>arr[mid])
		binarySearch(arr, mid+1, m, end, key);
	else if(key<arr[mid])
		binarySearch(arr, start, m, mid-1, key);
	else
		return -1;
}

int main(){
	int n,key=0;
	
	cout<<"Enter size of the array : ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	cout<<"Enter a number which you want to search : ";
	cin>>key;
	
	
	sort(arr,arr+n);
	
	int mid=arr[n/2];
	
	int index=binarySearch(arr, 0, mid, n-1, key);
	
	if(index==-1)
		cout<<key<<" not found in this given array.";
	else
		cout<<key<<" found in the given array.";
		
	return 0;
}
