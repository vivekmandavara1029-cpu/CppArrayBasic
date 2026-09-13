#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,n;
	cout<<"how many names do you want to print = ";
	cin>>n;//cout<<"n is representing the rows of character array";
	char str[n][20];
	//cout<<"this loop use to filling the elements of character array;;
	for(i=0;i<n;i++){
		cout<<"enter the "<<i+1<<" name ";
		fflush(stdin);//cout<<"it is use to cleaning the buffer ";
		gets(str[i]);}
		
	//cout<<"display the all elements of character array";
	for(i=0;i<n;i++){
	puts(str[i]);}
	return 0;}
	
