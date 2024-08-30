// Decimal to Binary Conversion

#include <iostream>
using namespace std;

int deTobi(int bi){
	int res=0;
	int base=1;				//initialize base value
	while(base<=bi)	//check nearest value of given number which is divisible by 2 (we need binary)
		base*=2;
	base/=2;	//above condition exit after one extra loop so we divide extra loop by 2 (binary)
	
	while(base>0){
		int lastDigit=bi/base; //calculate lastdigit of binary value
		bi-=lastDigit*base;		//update decimal value
		base/=2;		//update base value
		res=res*10+lastDigit;	//calculate result value
	}
	return res;
}

int main(){
	int de=0;
	cout<<"Enter a decimal number (0-9) : ";
	cin>>de;
	cout<<"Conversion of "<<de<<" in binary : "<<deTobi(de);
	
	return 0;
}
