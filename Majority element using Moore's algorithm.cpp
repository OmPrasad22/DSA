// Majority element using Moore's algorithm

#include <iostream>
#include <vector>
using namespace std;
int main(void){
	int s=0;
	cout<<"Enter array size : ";
	cin>>s;
	vector<int> vec(s,0);
	cout<<"Enter "<<s<<" numbers : ";
	for(int i=0;i<s;i++)
		cin>>vec[i];
	
	int freq=0,ans=0;
	for(int i=0;i<s;i++){
		if(freq == 0)
			ans = vec[i];
		if(vec[i] == ans)
			freq++;
		else
			freq--;
	}
	
	cout<<"Majority element : "<<ans;
}
