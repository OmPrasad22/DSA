// Floyd's Triangle

#include <iostream>
using namespace std;
int main(){
	int size=0;
	int num=1;
	cout<<"Enter pyramid size : ";
	cin>>size;
	for(int i=0;i<size;i++){
		for(int j=0;j<=i;j++){
			cout<<num++<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
