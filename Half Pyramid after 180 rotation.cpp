// Half Pyramid after 180 degree rotation

#include <iostream>
using namespace std;
int main(){
	int size=0;
	cout<<"Enter pyramid size : ";
	cin>>size;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(j<size-i-1)
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
