// Calculate nCr

#include <iostream>
using namespace std;

int fact(int f){
	int pr=1;
	for(int i=f;i>0;i--)
		pr*=i;
	return pr;
}

int main(){
	int n=0;
	int r=0;
	cout<<"\t|| Calculate nCr ||\t\n\n";
	cout<<"Enter value of n and r serailly : ";
	cin>>n>>r;
	cout<<"Value of nCr : "<<fact(n)/(fact(n-r)*fact(r));
	
	return 0;
}
