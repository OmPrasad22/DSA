// Number pattern

#include <iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter pattern size : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n-(i+1);j>0;j--)
			cout<<" ";
		for(int k=0;k<=i;k++)
			cout<<k+1<<" ";
		cout<<endl;
	}
	
	return 0;
}
