// Array Challenges: Longest Arithmetic Subarray

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
		
	int ans=2;					// Max arithmetic subarry length by default always 2
	int pd=arr[1]-arr[0];		// Previous common difference
	int curr=2;					// Current arithmetic subarray length by default always 2
	int j=2;
	
	while(j<n){
		if(pd==(arr[j]-arr[j-1]))
			curr++;
		else{
			pd=arr[j]-arr[j-1];
			curr=2;
		}
		
		ans=max(ans,curr);
		
		j++;
	}
	
	cout<<"Longest arithmetic subarray length : "<<ans;
	
	return 0;
}
