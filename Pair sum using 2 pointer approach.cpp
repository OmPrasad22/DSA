// Pair sum problem using 2-pointer approach

#include <iostream>
#include <vector>
using namespace std;
int main(void){
	int s=0;
	int target=0;
	cout<<"Enter array size : ";
	cin>>s;
	vector<int> vec(s,0);
	cout<<"Enter numbers in sorted form : ";
	for(int i=0;i<s;i++)
		cin>>vec[i];
	
	cout<<"Enter target value : ";
	cin>>target;
		
	int st=0;
	int en=vec.size()-1;
	
	while(st<en){
		if((vec[st] + vec[en]) == target){
			cout<<"Sum of "<<st<<" and "<<en<<" index values = "<<target;
			exit(0);
		}
		else if((vec[st] + vec[en]) > target)
			en--;
		else
			st++;
	}
	
}
