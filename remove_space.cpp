#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,k=0;
	//cout<<"create a string of size 100";
	char str[100];
	char newstring[100];//cout<< this array is use to fill the elements of string except spaces";
	cout<<"enter the name ";
	gets(str);
	//cout<<"use (for loop) for filling the elements of string into new string";
	for(i=0;str[i]!=0;i++){
		if(str[i]!=' '){
		newstring[k]=str[i];
		k++;}}
		newstring[k+1]='\0';
	//	cout<<"display the output";
			puts(newstring);
	return 0;}
