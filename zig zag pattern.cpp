// Zig-zag pattern

#include <iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter length of the pattern : ";
	cin>>n;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++){
			if((i==2 && j%4==0) || ((i+j)%4==0))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
