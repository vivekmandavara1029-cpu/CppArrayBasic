#include<iostream>
using namespace std;
int main (){
	int n,i,bot,top,kv,mid;
	cout<<"enter the size of array = ";
	cin>>n;
	int arr[n];//cout<<"create numeric array";
	
	//cout<<"fill the elements of array in the ascending order";
	for(i=0;i<n;i++){
	cout<<"enter the "<<i+1<<" value of array = ";
	cin>>arr[i];}
	
	//cout<<"user give key value";
	cout<<"enter the key value what do you want to find = ";
	cin>>kv;
	//cout<<"take two pointers,one is from zeroth element and another is from last element";
	top=0;
	bot=n-1;
	while(top<=bot){
	mid=(top+bot)/2;
	if(arr[mid]==kv){
	cout<<" search is successful and the key value is found.";
	return 0;}
	if(arr[mid<kv])
	top=mid+1;
	else
	bot=mid-1;}
	cout<<"search is not successful and element is not found.";
	return 0;
}
