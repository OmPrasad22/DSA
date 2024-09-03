// Linear search

#include <iostream>
using namespace std;
int main(){
	int n,key,index=0;
	
	cout<<"Enter array size : ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	cout<<endl<<"Enter an element which you want to search : ";
	cin>>key;
	
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			index=i;
			break;
		}
		else
			index=-1;
	}
	
	if(index==-1)
		cout<<key<<" not found in this given array.";
	else
		cout<<key<<" found '"<<index<<"' no index in the given array.";
		
	return 0;
}
