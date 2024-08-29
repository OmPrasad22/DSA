// Star pattern

#include <iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter pattern size : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n-(i+1);j>0;j--)
			cout<<" ";
		for(int k=2*(i+1)-1;k>0;k--)
			cout<<"*";
		cout<<endl;
	}
	for(int i=n;i>0;i--){
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=2*i-1;k>0;k--)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
