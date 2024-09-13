// Check largest word in sentence

#include <iostream>
#include <cstring>
#include <limits.h>
using namespace std;
int main(){
	char arr[1000];
	int maxUp=1;
	int ans=INT_MIN;
	int st=0;
	int maxSt=0;
	
	cout<<"Enter a sentence : ";
	cin.getline(arr,1000);
	
	for(int i=0;i<=strlen(arr);i++){
		if(arr[i]==' ' || arr[i]=='\0'){
			if(ans<maxUp-1){
				ans=maxUp-1;
				st=i-ans;
				maxSt=i-1;
			}
			maxUp=0;
		}		
		maxUp+=1;
	}
	
	cout<<"Largest word length : ";
	for(int i=st;i<=maxSt;i++)
		cout<<arr[i];

	return 0;
}
