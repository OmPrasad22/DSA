// Butterfly pattern

#include <iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter pattern size : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)
			cout<<"*";
		int sp=2*n-2*i;
		for(int j=0;j<sp;j++)
			cout<<" ";
		for(int j=0;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	for(int i=n;i>=0;i--){
		for(int j=0;j<=i;j++)
			cout<<"*";
		int sp=2*n-2*i;
		for(int j=0;j<sp;j++)
			cout<<" ";
		for(int j=0;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
