// 2d array challenges: Search number in matrix without linear search

#include <iostream>
using namespace std;

int main(){
	int r,c=0;
	cout<<"Enter row and coloumn size serially : ";
	cin>>r>>c;
	
	int arr[r][c];
	
	cout<<"Enter "<<r*c<<" elements : \n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
	}
	
	int target,i=0,j=c-1;
	cout<<"Enter number which you want to search : ";
	cin>>target;
	while(i<r && j>=0){
		if(arr[i][j]==target){
			cout<<"Element found on "<<i+1<<"th row and "<<j+1<<"th coloumn.";
			return 0;
		}
		else if(arr[i][j]>target)
			j--;
		else
			i++;
	}
	
	cout<<"Element not found";

	return 0;	
}
