#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,top,bot;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	cout<<"enter the "<<i+1<<" value of array = ";
	cin>>arr[i];}
	
	top=0; //cout<<"top start from zero index";
	bot=n-1;//cout<<"bot start from n-1 index";
	
	
	//cout<<" using two pointer approch for reverse of array in place";
	while(top<bot){
	swap(arr[top],arr[bot]);
	top++;
bot--;}
//cout<<"thid loop for display the reverse of array";
for(i=0;i<n;i++){
	cout<<arr[i]<<endl;}
	return 0;}
