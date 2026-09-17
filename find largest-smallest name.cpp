#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,n,j,max=0,min=100,idx,idx1;
	cout<<"how many names do you want to print = ";
	cin>>n;
	char str[n][20];//cout<<"create a character array of size [n][20]";
	//cout<<"fill out the array";
	for(i=0;i<n;i++){
		cout<<"enter the "<<i+1<<" name ";
		fflush(stdin);
		gets(str[i]);}
		
		//cout<<" find the smallest and largest name in the array using basic loops concept";
	for(i=0;i<n;i++){
	for(j=0;str[i][j]!='\0';j++);
	if(j>max){
	max=j;
	idx=i;}
	if(j<min){
	min=j;
	idx1=i;}}
	//cout<<"display the names";
	cout<<"the largest name in a string is "<<str[idx]<<endl;
	cout<<"the smallest name in a string is "<<str[idx1];
	return 0;}
