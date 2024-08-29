// Reverse the given number

#include <iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter a number : ";
	cin>>n;
	int rev=0;	// Create a variable which store the reverse value of given number
	
	while(n!=0){
		rev=(rev*10)+(n%10);	// store the last value of the given number
		n=n/10;		// update n value after storing the last value
	}
		
	cout<<"Reverse of the given number : "<<rev;	// Print the reverse of the given number
	
	return 0;
}
