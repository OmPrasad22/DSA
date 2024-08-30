// Decimal to Hexadecimal Conversion
//note: Follow "D:\Desktop\All language Projects\C,C++ Projects\Decimal to Binary.cpp"

#include <iostream>
#include <string>
using namespace std;

string deTohex(int de){
	int base=1;
	string res;
	while(base<=de)
		base*=16;
	base/=16;
	while(base>0){
		int lastdigit=de/base;
		de-=lastdigit*base;
		base/=16;
		if(lastdigit<=9)
			res = res + to_string(lastdigit);
		else{
			char nTc = 'A'+lastdigit-10;
			res.push_back(nTc);
		}
	}
	return res;
}

int main(){
	int de=0;
	cout<<"Enter a decimal number (0-9) : ";
	cin>>de;
	cout<<"Conversion of "<<de<<" in Hexadecimal : "<<deTohex(de);
	
	return 0;
}
