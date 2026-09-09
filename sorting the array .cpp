#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,j;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	//cout<<"fill the index of array using for loops ":
	for(i=0;i<n;i++){
	cout<<"enter the "<<i+1<<" value of array = ";
	cin>>arr[i];}
	for(i=0;i<n-1;i++){ //cout<<"using nesting concept";
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j])
			swap(arr[i],arr[j]);//cout<<" it is use for the swapping the element of index value";
			}}
			//cout<<"display the element of an array";
		for(i=0;i<n;i++){
			cout<<arr[i]<<endl;
		}
		return 0;}
