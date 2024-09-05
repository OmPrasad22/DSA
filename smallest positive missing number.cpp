// Array Challenges: Smallest positive missing number

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
		
	int N=INT_MIN;
	for(int i=0;i<n;i++)
		if(N<arr[i])
			N=arr[i];
			
	bool tOf[N];
	for(int i=0;i<=N;i++)
		tOf[i]=false;
	
	for(int i=0;i<n;i++){
		if(arr[i]>=0)
			tOf[arr[i]]=true;
	}	
	
	int ans=-1;
	
	for(int i=0;i<=N;i++)
		if(tOf[i]==false){
			ans=i;
			break;
		}
	
	cout<<"Smallest positive missing number : "<<ans;
	return 0;
}
