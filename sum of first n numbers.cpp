// Sum of first n natural numbers using function

#include <iostream>
using namespace std;

int sof(int num){
	int res=0;
	for(int i=1;i<=num;i++)
		res+=i;
	return res;
	
//	return (num*(num+1))/2;		also you can use this formula for no use of loop
}

int main(){
	int n=0;
	cout<<"Enter value of n : ";
	cin>>n;
	cout<<"Sum of first "<<n<<" natural numbers : "<<sof(n);
	
	return 0;
}
