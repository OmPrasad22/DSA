// Majority element without using brute force method

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
	int s=0;
	cout<<"Enter array size : ";
	cin>>s;
	vector<int> vec(s,0);
	cout<<"Enter "<<s<<" numbers : ";
	for(int i=0;i<s;i++)
		cin>>vec[i];
	
	sort(vec.begin(), vec.end());
	
	int freq=1;
	for(int i=0;i<s-1;i++){
		if(vec[i] != vec[i+1])
			freq=1;
		freq++;
		if(freq > s/2){
			cout<<"Majority element : "<<vec[i];
			exit(0);
		}
	}
}
