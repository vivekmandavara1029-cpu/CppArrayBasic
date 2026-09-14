#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,n,j,flag,right,left;
	cout<<"how many names you print = ";
	cin>>n;//cout<<"n is representing the size of string";
	
	char str[n][20];
	for(i=0;i<n;i++){
		cout<<"enter the "<<i+1<<" name =  ";
		fflush(stdin);//" it is use to cleaning the buffer";
		gets(str[i]);}
		
	for(i=0;i<n;i++){
		flag=1;// cout<<" flag is use to break the loop , if condition is flase":
		for(j=0;str[i][j]!='\0';j++);
		//cout<<"take two pointers, right is start from zeroth index and left is start from (n-1)th index";
		right=j-1;
		left=0;
		while((right>left)&&(flag==1)){
		if(str[i][right]!=str[i][left]){//cout<<"check palindrome condition";
		flag=0;}
		left++;
		right--;}	
	//	cout<<" if flag=1 , palindrome name is present in character array";
		if(flag==1)
cout<<str[i]<<endl;}
		 	return 0;}
