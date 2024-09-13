// Break words in alphabet

#include <iostream>
using namespace std;
int main(){	
	char arr[1000];
	int i=0;
	
	cout<<"Enter a sentence : ";
	cin>>arr;
		
	cout<<"Break words in alphabet : \n";
	while(arr[i] != '\0'){
		cout<<arr[i]<<endl;
		i++;
	}
	
	return 0;
}
