// Spiral order matrix traversal in 2-d array

#include <iostream>
using namespace std;
int main(){
	int r,c=0;		// r=row number & c=coloumn number
	
	cout<<"Enter row and coloumn size seriesly : ";
	cin>>r>>c;
	
	int arr[r][c];
	
	cout<<"Enter "<<r*c<<" elements : \n";
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>arr[i][j];
			
	cout<<"Spiral order matrix traversal : ";
	
	int rs=0,re=r-1,cs=0,ce=c-1;
	
	while(rs<=re && cs<=ce){
		// for row start
		for(int col=cs;col<=ce;col++)
			cout<<arr[rs][col]<<"\t";
		rs++;
		// for coloumn end
		for(int row=rs;row<=re;row++)
			cout<<arr[row][ce]<<"\t";
		ce--;
		//for row end
		for(int col=ce;col>=cs;col--)
			cout<<arr[re][col]<<"\t";
		re--;
		// for coloumn start
		for(int row=re;row>=rs;row--)
			cout<<arr[row][cs]<<"\t";
		cs++;
	}
	
	return 0;			
}
