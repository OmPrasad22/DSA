// Pascal triangle

#include <iostream>
using namespace std;

int fact(int f){
	int res=1;
	for(int i=f;i>0;i--)
		res*=i;
	return res;
}

int nCr(int n,int r){
	return fact(n)/(fact(n-r)*fact(r));
}

int main(){
	int pt=0;
	cout<<"Enter size of Pascal Triangle : ";
	cin>>pt;
	for(int i=0;i<pt;i++){
		for(int j=0;j<=i;j++)
			cout<<nCr(i,j)<<" ";
		cout<<endl;
	}
	
	return 0;
}
