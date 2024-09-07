// 2d array challenges: Transpose of a matrix

#include <iostream>
using namespace std;

int main(){
	int n=0;
	cout<<"Enter row(or coloumn) number : ";
	cin>>n;
	
	int arr[n][n];
	
	cout<<"Enter "<<n*n<<" elements : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	
	int trans_a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			trans_a[i][j]=arr[j][i];
	}
	
	//print transpose of the matrix
	cout<<"Transpose of the given matrix : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<trans_a[i][j]<<"\t";
		cout<<endl;
	}
	
	return 0;
}
