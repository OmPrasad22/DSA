// Inverted pattern

#include <iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter pattern size : ";
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	
	return 0;
}
