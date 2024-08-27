// Half pyramid using number 

#include <iostream>
using namespace std;
int main(){
	int size=0;
	cout<<"Enter pyramid size : ";
	cin>>size;
	for(int i=0;i<size;i++){
		for(int j=0;j<=i;j++){
			cout<<i+1;
		}
		cout<<endl;
	}
	
	return 0;
}
