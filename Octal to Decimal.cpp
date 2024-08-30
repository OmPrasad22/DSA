// Octal to Decimal conversion

#include <iostream>
#include <cmath>
using namespace std;

int ocTode(int de){
	int res,p=0;
	while(de!=0){
		res=res+((de%10)*pow(8,p));
		de=de/10;
		p++;
	}
	return res;
}

int main(){
	int oc=0;
	cout<<"Enter an Octal number (0 - 7) : ";
	cin>>oc;
	cout<<"Coversion of "<<oc<<" in decimal : "<<ocTode(oc);
	
	return 0;
}
