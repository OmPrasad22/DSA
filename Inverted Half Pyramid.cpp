// Inverted Half Pyramid

#include <iostream>
using namespace std;
int main(){
	int size=0;
	cout<<"Enter pyramid size : ";
	cin>>size;
	for(int i=size;i>0;i--){
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
