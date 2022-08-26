// Name: Aryan Sharma
// RollNo.: 2010991239
// SetNo.: 04
// Question: 1- Given an integer array,find the minimum index of a repating element in linear time and doing just a single transversal of a the array.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int min=-1;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	set<int> r;
	for(int i=n-1;i>=0;i--){
		if(r.find(arr[i])!=r.end())
		{
			min=i;
		}
		else{
			r.insert(arr[i]);
		}
	}
	if(min!=-1)
	cout<<"Hello"<<min<<endl;
	else
	cout<<"InVAlid Input"<<endl;
	return 0;
}
