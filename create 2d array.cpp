#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,j,n,m ;
	cout<<"enter the size row of array n = ";
	cin>>n;
	cout<<"enter the size of column of array m = ";
	cin>>m;
	int arr[n][m]; 
	//cout<<"filling the elements of 2d array";
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<"enter the value of "<<i+1<<"  row and "<<j+1<<"  column of the array ";
			cin>>arr[i][j];}
			cout<<endl;}
	//cout<<"display the output using nesting";
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<arr[i][j];}
			cout<<endl;}
			return 0;}
