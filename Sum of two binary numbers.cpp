// Calculate sum of two binary numbers

#include <iostream>
using namespace std;

int reverse(int re){
	int ans=0;
	while(re>0){
		ans*=10;
		ans+=(re%10);
		re/=10;
	}
	return ans;
}

int binarySum(int f, int s){
	int carry=0;
	int res=0;
	while(f>0 && s>0){
		if(f%2==0 && s%2==0){
			res=(res*10)+carry;
			carry=0;
		}
		else if(f%2==0 && s%2==1 || f%2==1 && s%2==0){
			if(carry==0){
				res=(res*10)+1;
				carry=0;
			}
			else{
				res=(res*10)+0;
				carry=1;
			}
		}
		else{
			res=(res*10)+carry;
			carry=1;
		}
		f/=10;
		s/=10;
	}
	
	while(f>0){
		if(carry==0)
			res=(res*10)+(f%2);
		else{
			if(f%2==0){
				res=(res*10)+1;
				carry=0;
			}
			else{
				res=(res*10)+0;
				carry=1;
			}
		}
		f/=10;
	}
	
	while(s>0){
		if(carry==0)
			res=(res*10)+(s%2);
		else{
			if(s%2==0){
				res=(res*10)+carry;
				carry=0;
			}
			else{
				res=(res*10)+0;
				carry=1;
			}
		}
		s/=10;
	}
	
	if(carry==1)
		res=(res*10)+1;
		
	return reverse(res);
}

int main(){
	int fb=0;
	int sb=0;
	cout<<"Enter two binary numbers serially for addition : ";
	cin>>fb>>sb;
	cout<<"Addition of "<<fb<<" and "<<sb<<" : "<<binarySum(fb,sb);
	
	return 0;
}
