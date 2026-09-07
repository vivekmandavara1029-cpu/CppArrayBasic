#include<iostream>
using namespace std;
int main (){
	int n,i,flag=1,k,index=0;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	//cout<<"create an array by given the value of each index";
	for(i=0;i<n;i++){
	cout<<"enter the "<<i+1<<" value of array = ";
	cin>>arr[i];}
	cout<<"enter the value what do you want to find ";
	cin>>k;

	for(i=0;((i<n)&&(flag==1));i++){
		if((arr[i])==k)
		flag=0; //cout<<"if flag=0,the loop is break";
		index=i;}
 
	if(flag==0)
	cout<<"the value is same in array of the index number "<<index;
	else
	cout<<"the value is does not find in array";
	return 0 ;}
