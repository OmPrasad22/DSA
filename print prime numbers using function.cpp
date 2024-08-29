// Print all prime numbers between a to b using function

#include <iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main(){
	int a,b=0;
	cout<<"Enter range of two numbers serially : ";
	cin>>a>>b;
	
	if(a<b){
		for(int i=a;i<b;i++)
			if(isPrime(i))
				cout<<i<<" ,";
	}
	else
		cout<<"Please enter a valid range...";
		
	return 0;
}
