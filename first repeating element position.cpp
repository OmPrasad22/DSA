// Array Challenges: First repeating element

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
		
	int N=INT_MIN;				// set N = max element of array
	for(int i=0;i<n;i++)
		if(N < arr[i])
			N=arr[i];
				
	int idx[N+1];				// create idx array which all elements are -1
	for(int i=0;i<=N;i++)
		idx[i]=-1;
		
	int ans=0;
	int minIdx=INT_MAX;
	for(int i=0;i<n;i++){
		if(idx[arr[i]]==-1)
			idx[arr[i]]=i;
		else
			minIdx=min(minIdx,idx[arr[i]]);
	}
	
	if(minIdx==INT_MAX)
		ans=-1;
	else
		ans=minIdx+1;
	
	cout<<"First repeating element position : "<<ans;
	
	return 0;
}
