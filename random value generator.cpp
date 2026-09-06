#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,l;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	srand(time(NULL)); //cout<<"it is use for the generate random number with respect to time";
	for(i=0;i<n;i++){
		arr[i]=rand()%500+1;}//cout<<"this rand()%500+1  generate value from 0 to 500";
		
		//cout<<"this loop for print all the element of array";
		for(i=0;i<n;i++){
			cout<<arr[i]<<endl;}
		return 0;}
	
	
