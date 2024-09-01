#include <iostream>
using namespace std;

void solidRectangle(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<"*";
		cout<<endl;
	}
}

void hollowRectangle(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(i==1 || j==n || i==n || j==1)
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
}

void halfPyramid(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
}

void invertedHalfPyramid(int n){
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
}

void halfPyramidAfter180(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(j <= n-i)
				cout<<" ";
			else
				cout<<"*";
		cout<<endl;
	}
}

void halfPyramidUsingNumbers1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			cout<<j;
		cout<<endl;
	}
}

void invertedHalfPyramidUsingNumbers1(int n){
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++)
			cout<<j;
		cout<<endl;
	}
}

void halfPyramidUsingNumbers2(int n){
	int count=1;
	for(int i=1;i<=n;i++,count++){
		for(int j=1;j<=i;j++)
			cout<<count;
		cout<<endl;
	}
}

void invertedHalfPyramidUsingNumbers2(int n){
	int count=1;
	for(int i=n;i>0;i--,count++){
		for(int j=1;j<=i;j++)
			cout<<count;
		cout<<endl;
	}
}

void floydsTriangle(int n){
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			cout<<count++<<"  ";
		cout<<endl;
	}
}

void zeroOnePattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			if((i+j)%2!=0)
				cout<<"0";
			else
				cout<<"1";
		cout<<endl;
	}
}

int main(){
	int ch=0;
	int n=0;
	do{
		cout<<"\n\t|| Pattern Solving question ||\n\n";
		cout<<"Press 1 for Print Solid Rectangle\n";
		cout<<"Press 2 for Print Hollow Rectangle\n";
		cout<<"Press 3 for Print Half Pyramid\n";
		cout<<"Press 4 for Print Inverted Half Pyramid\n";
		cout<<"Press 5 for Print Half Pyramid after 180 rotation\n";
		cout<<"Press 6 for Print Half Pyramid using numbers type: 1\n";
		cout<<"Press 7 for Print Inverted Half Pyramid using numbers type: 1\n";
		cout<<"Press 8 for Print Half Pyramid using numbers type: 2\n";
		cout<<"Press 9 for Print Inverted Half Pyramid using numbers type: 2\n";
		cout<<"Press 10 for Print Floyd's Triangle\n";
		cout<<"Press 11 for Print 0-1 Pattern\n";
		cout<<"Press 0 for Exit\n\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				solidRectangle(n);
				break;
			case 2:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				hollowRectangle(n);
				break;
			case 3:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				halfPyramid(n);
				break;
			case 4:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				invertedHalfPyramid(n);
				break;
			case 5:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				halfPyramidAfter180(n);
				break;
			case 6:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				halfPyramidUsingNumbers1(n);
				break;
			case 7:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				invertedHalfPyramidUsingNumbers1(n);
				break;
			case 8:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				halfPyramidUsingNumbers2(n);
				break;
			case 9:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				invertedHalfPyramidUsingNumbers2(n);
				break;
			case 10:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				floydsTriangle(n);
				break;
			case 11:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				zeroOnePattern(n);
				break;
			case 0:
				cout<<"\n|| Thank You ||\n";
				exit(0);
			default:
				cout<<"\n|| Wrong Choice ||\n";
		}
	}while(ch!=0);
	
	return 0;
}
