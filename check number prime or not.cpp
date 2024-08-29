// Check the number prime or not

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n=0;
	bool flag=0;
	cout<<"Enter a number : ";
	cin>>n;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			flag=0;
			break;
		}
		else
			flag=1;
	}
	if(flag==1)
		cout<<n<<" is a prime number.";
	else
		cout<<n<<" is not a prime number.";
		
	return 0;
}
