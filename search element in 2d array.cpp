// Searching an element in 2-D array

#include <iostream>
using namespace std;
int main(){
	int r,c=0;		// r=row number & c=coloumn number
	
	cout<<"Enter row and coloumn size seriesly : ";
	cin>>r>>c;
	
	int arr[r][c];
	
	cout<<"Enter "<<r*c<<" elements : ";
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
			
	int k=0;
	cout<<"Enter an element which you want to search : ";
	cin>>k;
			
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]==k){
				cout<<"Element found";
				return 0;
			}
		}
	}
	
	cout<<"Element not found";
	
	return 0;
}
