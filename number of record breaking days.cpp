// Array Challenges: Number of Record breaking day

#include <iostream>
using namespace std;

int main(){
	int n=0;
	
	cout<<"Enter size of the array: ";
	cin>>n;
	
	int arr[n+1];
	arr[n]=-1;
	
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	if(n==1){
		cout<<"Number of record breaking days : 1";
		return 0;
	}
		
	int mx=-1;		
	int j=0;
	int ans=0;
	while(j<n){
		if(arr[j]>mx && arr[j]>arr[j+1])
			ans++;
		mx=max(mx,arr[j]);
		j++;
	}
	
	cout<<"Number of record breaking days : "<<ans;
	
	return 0;
}
