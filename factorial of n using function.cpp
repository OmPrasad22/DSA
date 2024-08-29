// Print factorial of number n

#include <iostream>
using namespace std;

void factorial(int f){
	int fact=1;
	for(int i=f;i>0;i--)
		fact*=i;
	cout<<"Factorial of the given number : "<<fact;
}

int main(){
	int n=0;
	cout<<"Enter a number : ";
	cin>>n;
	factorial(n);
	
	return 0;
}
