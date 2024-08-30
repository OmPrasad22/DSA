// Decimal to Octal Conversion
//note: Follow "D:\Desktop\All language Projects\C,C++ Projects\Decimal to Binary.cpp"

#include <iostream>
using namespace std;

int deTooc(int oc){
	int base=1;
	int res=0;
	while(oc>=base)
		base*=8;
	base/=8;
	
	while(base>0){
		int lastdigit=oc/base;
		oc-=lastdigit*base;
		base/=8;
		res=res*10+lastdigit;
	}
	return res;
}

int main(){
	int de=0;
	cout<<"Enter a decimal number (0-9) : ";
	cin>>de;
	cout<<"Conversion of "<<de<<" in Octal : "<<deTooc(de);
	
	return 0;
}
