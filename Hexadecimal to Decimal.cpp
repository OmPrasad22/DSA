// Hexadecimal to Decimal Conversion

#include <bits/stdc++.h>
using namespace std;

int heTode(string de){
	int res=0;
	int p=0;
	int n=de.size();
	for(int i=n-1;i>=0;i--){
		if(de[i]>='0' && de[i]<='9'){
			res=res+(de[i]-'0')*pow(16,p);
			p+=1;
		}
		else if(de[i]>='A' && de[i]<='F'){
			res=res+(de[i]-'A'+10)*pow(16,p);
			p+=1;
		}
	}
	return res;
}

int main(){
	string he;
	cout<<"Enter a Hexadecimal number (0-F) : ";
	cin>>he;
	cout<<"Conversion of "<<he<<" in decimal : "<<heTode(he);
	
	return 0;
}
