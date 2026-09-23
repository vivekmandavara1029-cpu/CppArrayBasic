#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,i,kv,flag,index,j,l;
	cout<<"enter the value of size of array = ";
	cin>>n;
	int arr[n+1];//cout<<" plus one for inserting the key value in an given array ";
	srand(time(NULL));//
	for(i=0;i<n;i++){
		arr[i]=rand()%500+1;}//cout<<"take randoms value from the srand function";
		
	//	cout<<"this nesting loops is to sort the  given random value array in ascending order";
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j])
			swap(arr[i],arr[j]);
			}}
			
	cout<<"enter the key value what do you want to insert between(0 to 500) = ";
	cin>>kv;
	flag=1;
	//cout<<"this loops use to inserting the key value in an given array";
	for(i=0;((i<n)&&(flag==1));i++){
		if(kv<arr[i])
		flag=0;
		index=i;}
	for(i=n+1;i>index;i--){
		arr[i]=arr[i-1];}
		arr[index]=kv;
	//	cout<<"display the the new given sorted array";
		for(i=0;i<=n;i++){
			cout<<arr[i]<<endl;
		}
		return 0;}
