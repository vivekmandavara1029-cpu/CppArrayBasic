#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,kv,flag,index;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{cout<<"enter the value "<<i+1<<" element of array = ";
	cin>>arr[i];}
	cout<<"enter the key value what do you want to delete ";
	cin>>kv;
	flag=1;
	for(i=0;((i<n)&&(flag==1));i++){
		if(arr[i]!=kv){
		cout<<"the key value is not found in array";
		return 0;} 
	if(arr[i]==kv)
	flag=0;
	index=i;}
	
	for(i=index;i<n;i++)
	{arr[i]=arr[i+1];}
	
	for(i=0;i<n-1;i++){
	cout<<arr[i]<<endl;}

	return 0;}
