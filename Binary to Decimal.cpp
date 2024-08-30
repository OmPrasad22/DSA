// Binary to Decimal conversion

#include <iostream>
#include <cmath>
using namespace std;

int biTode(int de){
	int res,p=0;
	while(de!=0){
		res=res+((de%10)*pow(2,p));
		de=de/10;
		p++;
	}
	return res;
}

int main(){
	int bi=0;
	cout<<"Enter a binary number (0 / 1) : ";
	cin>>bi;
	cout<<"Conversion of "<<bi<<" in decimal : "<<biTode(bi);
	
	return 0;
}
