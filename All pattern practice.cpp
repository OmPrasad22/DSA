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

void palindromicPattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=i;k>0;k--)
			cout<<k;
		for(int x=2;x<=i;x++)
			cout<<x;
		cout<<endl;
	}
}

void diamondUsingStars(int n){
	for(int i=1;i<=n;i++){		// print upper part
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=2*i-1;k++)
			cout<<"*";
		cout<<endl;
	}
	
	for(int i=n;i>0;i--){		// mirror upper part
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=2*i-1;k++)
			cout<<"*";
		cout<<endl;
	}
}

void hollowDiamondUsingStars(int n){
	for(int i=1;i<=n;i++){				// print upper part
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=2*i-1;k++)
			if(k==1 || k==(2*i-1))
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
	
	for(int i=n;i>0;i--){				// mirror upper part
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=2*i-1;k++)
			if(k==1 || k==(2*i-1))
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
}

void hollowDiamondInARectangle(int n){
	for(int i=1;i<=n;i++){			// print upper part
		for(int j=n-i;j>0;j--)
			cout<<"*";
		for(int k=1;k<=2*i-1;k++)
			if(k==1 || k==(2*i-1))
				cout<<"*";
			else
				cout<<" ";
		for(int x=n-i;x>0;x--)
			cout<<"*";
		cout<<endl;
	}
	
	for(int i=n;i>0;i--){			// mirror upper part
		for(int j=n-i;j>0;j--)
			cout<<"*";
		for(int k=1;k<=2*i-1;k++)
			if(k==1 || k==(2*i-1))
				cout<<"*";
			else
				cout<<" ";
		for(int x=n-i;x>0;x--)
			cout<<"*";
		cout<<endl;
	}
}

void solidRhombus(int n){
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=n;k++)
			cout<<"*";
		cout<<endl;
	}
}

void hollowRhombus(int n){
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=n;k++)
			if(k==1 || k==n || i==1 || i==n)
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
}

void pyramidForNumbers1(int n){
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=i;k++)
			cout<<i<<" ";
		cout<<endl;
	}
}

void pyramidForNumbers2(int n){
	for(int i=1;i<=n;i++){
		int count=1;
		for(int j=n-i;j>0;j--)
			cout<<" ";
		for(int k=1;k<=i;k++)
			cout<<count++<<" ";
		cout<<endl;
	}
}

void solidButterfly(int n){
	for(int i=1;i<=n;i++){			// print upper part
		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int x=1;x<=2*(n-i);x++)
			cout<<" ";
		for(int k=1;k<=i;k++)
			cout<<"*";
		cout<<endl;
	}
	
	for(int i=n;i>0;i--){			// mirror upper part
		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int x=1;x<=2*(n-i);x++)
			cout<<" ";
		for(int k=1;k<=i;k++)
			cout<<"*";
		cout<<endl;
	}
}

void hollowButterfly(int n){
	for(int i=1;i<=n;i++){			// print upper part
		for(int j=1;j<=i;j++)
			if(j==1 || j==i)
				cout<<"*";
			else
				cout<<" ";
		for(int x=1;x<=2*(n-i);x++)
			cout<<" ";
		for(int k=1;k<=i;k++)
			if(k==1 || k==i)
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
	
	for(int i=n;i>0;i--){			// mirror upper part
		for(int j=1;j<=i;j++)
			if(j==1 || j==i)
				cout<<"*";
			else
				cout<<" ";
		for(int x=1;x<=2*(n-i);x++)
			cout<<" ";
		for(int k=1;k<=i;k++)
			if(k==1 || k==i)
				cout<<"*";
			else
				cout<<" ";
		cout<<endl;
	}
}

void pascalTriangle(int n){
	int coef=1;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n-i;j++)
			cout<<" ";
		for(int k=0;k<=i;k++){
			if(k==0 || i==0)
				coef=1;
			else
				coef=coef*(i-k+1)/k;
			cout<<coef<<" ";
		}
		cout<<endl;
	}
}

void zigZag(int n){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++)
			if((i+j)%4==0 || ((i%2==0) && (j%4==0)))
				cout<<"* ";
			else
				cout<<"  ";
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
		cout<<"Press 12 for Print Palindromic Pattern\n";
		cout<<"Press 13 for Print Diamond using Stars\n";
		cout<<"Press 14 for Print Hollow Diamond using Stars\n";
		cout<<"Press 15 for Print Hollow Diamond Inscribed in a Rectangle\n";
		cout<<"Press 16 for Print Solid Rhombus\n";
		cout<<"Press 17 for Print Hollow Rhombus\n";
		cout<<"Press 18 for Print Pyramid Pattern for numbers type: 1\n";
		cout<<"Press 19 for Print Pyramid Pattern for numbers type: 2\n";
		cout<<"Press 20 for Print Solid Butterfly Pattern\n";
		cout<<"Press 21 for Print Hollow Butterfly Pattern\n";
		cout<<"Press 22 for Print Pascal Triangle\n";
		cout<<"Press 23 for Print Zig Zag Pattern\n";
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
			case 12:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				palindromicPattern(n);
				break;
			case 13:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				diamondUsingStars(n);
				break;
			case 14:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				hollowDiamondUsingStars(n);
				break;
			case 15:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				hollowDiamondInARectangle(n);
				break;
			case 16:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				solidRhombus(n);
				break;
			case 17:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				hollowRhombus(n);
				break;
			case 18:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				pyramidForNumbers1(n);
				break;
			case 19:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				pyramidForNumbers2(n);
				break;
			case 20:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				solidButterfly(n);
				break;
			case 21:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				hollowButterfly(n);
				break;
			case 22:
				cout<<"\nEnter pattern size : ";
				cin>>n;
				pascalTriangle(n);
				break;
			case 23:
				cout<<"\nEnter length of pattern : ";
				cin>>n;
				zigZag(n);
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
