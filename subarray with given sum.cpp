// Array Challenges: Subarray with given sum

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
		
	int s,i,j=0;
	cout<<"Enter value of S : ";
	cin>>s;
		
	for(i=0;i<n;i++){
		int sum=arr[i];
		if(arr[i]<s){
			for(j=i+1;j<n;j++){
				sum+=arr[j];
				if(sum==s){
					cout<<i+1<<"th position to "<<j+1<<"th position subarray sum is equal to "<<s<<endl;
					exit(0);
				}
			}
		}
		else
			continue;
	}
	
	
	return 0;
}
