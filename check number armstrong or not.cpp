// Check the given number armstrong or not

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int count_digit(int number){		// Count the length of digit
   return int(log10(number) + 1);
}

int main(){
	int n=0;
	cout<<"Enter a number : ";
	cin>>n;
	
	int arm=0;	// Create a variable which store the armstrong value
	int temp=n;	// Create a variable which store the given number to helps us for checking
	
	while(n!=0){
		arm+=pow(n%10,count_digit(temp));		//store cube of last digit and sum in arm variable
		n=n/10;		// update n variable
	}
	
	if(temp==arm)		// check the number armstrong or not
		cout<<temp<<" is a armstrong number.";
	else
		cout<<temp<<" is not a armstrong number.";
	
	return 0;
}
