#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,median=0;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	cout<<"enter the value of "<<i+1<<" element of array = ";
	cin>>arr[i];}
	//cout<<"if the size of array is even";
		if(n%2==0)
		median=((arr[n/2] + arr[(n-1)/2])/2);
		//cout<<" if the size of array is odd";
	else
		median=arr[n/2];
		cout<<"the median of array is = "<<median;
		return 0;}
