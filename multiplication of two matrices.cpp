// 2d array challenges: Matrix multiplication

#include <iostream>
using namespace std;

int main(){
	int r1,r2,c1,c2=0;
	cout<<"\n||Input for first matrix||\n\n";
	cout<<"Enter row and coloumn size serially : ";
	cin>>r1>>c1;
	
	int arr1[r1][c1];
	
	cout<<"Enter "<<r1*c1<<" elements : \n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++)
			cin>>arr1[i][j];
	}
	
	
	cout<<"\n||Input for second matrix||\n\n";
	cout<<"Enter coloumn size (row="<<c1<<") : ";
	cin>>c2;
	r2=c1;
	
	int arr2[r2][c2];
	
	cout<<"Enter "<<r2*c2<<" elements : \n";
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++)
			cin>>arr2[i][j];
	}
	
	cout<<"Entered matrices are : \n\n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++)
			cout<<arr1[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++)
			cout<<arr2[i][j]<<"\t";
		cout<<endl;
	}
	
	
	// Multiplication of two matrices
	int a1xa2[r1][c2];
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			int sum=0;
			for(int k=0;k<c1;k++)
				sum+=(arr1[i][k]*arr2[k][j]);
			a1xa2[i][j]=sum;
		}
	}
	
	cout<<"\n\nEntered matrices multiplication : \n\n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++)
			cout<<a1xa2[i][j]<<"\t";
		cout<<endl;
	}
	
	return 0;
}
