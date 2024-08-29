// Palindromic pattern

#include <iostream>
using namespace std;
int main(){
	int n=0;
	int count=0;
	cout<<"Enter pattern size : ";
	cin>>n;
	for(int i=0;i<n;i++){
		count=n;
		for(int j=n-(i+1);j>0;j--,count--)
			cout<<" ";
		for(int k=count;k>0;k--)
			cout<<k;
		for(int x=0;x<i;x++)
			cout<<x+2;
		cout<<endl;
	}
	
	return 0;
}
