// Check pythagorian triplet

#include <iostream>
#include <cmath>
using namespace std;

bool pythTrip(int a, int b, int c){
	int m = max(a,max(b,c));
	
	if(m==a)
		if(pow(a,2)==(pow(b,2)+pow(c,2)))
			return true;
		else
			return false;
	else if(m==b)
		if(pow(b,2)==(pow(a,2)+pow(c,2)))
			return true;
		else
			return false;
	else
		if(pow(c,2)==(pow(a,2)+pow(b,2)))
			return true;
		else
			return false;
}

int main(){
	int x,y,z=0;
	cout<<"Enter three value serially : ";
	cin>>x>>y>>z;
	if(pythTrip(x,y,z))
		cout<<"It's a pythagorian triplet.";
	else
		cout<<"It's not a pythogorian triplet.";
		
	return 0;
}
