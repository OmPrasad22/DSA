// Check palindrome of a word

#include <iostream>
#include <cstring>
using namespace std;
int main(){
	bool check=0;
	
	char arr[1000];
		
	cout<<"Enter a word : ";
	cin>>arr;
	
	int n=strlen(arr);
	
	for(int i=0;i<n;i++){
		if(arr[i] == arr[n-1-i])
			check=1;
		else{
			check=0;
			cout<<arr<<" is not a palindrome word.";
			break;
		}
	}
	
	if(check==1)
		cout<<arr<<" is a palindrome word.";
	
	return 0;
}
