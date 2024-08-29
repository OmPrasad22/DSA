// Print fibenacci sequence using function

#include <iostream>
using namespace std;

void fibenacci(int f){
	int f1=0;
	int f2=1;
	int f3=0;
	for(int i=0;i<f;i++){
		cout<<f1<<" ,";
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
}

int main(){
	int n=0;
	cout<<"Enter fibenacci sequence number : ";
	cin>>n;
	fibenacci(n);
	
	return 0;
}
