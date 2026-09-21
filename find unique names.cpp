#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,n,k;
	cout<<"how many names do you want to print = ";
	cin>>n;
	char str[n][20];
	for(i=0;i<n;i++){
		cout<<"enter the "<<i+1<<" name ";
		fflush(stdin);//cout<<"it is use to cleaning the buffer ";
		gets(str[i]);}
		
		cout<<"A name which is does not ends  with i , y , a is "<<endl;
		for(i=0;i<n;i++){
			for(k=0;str[i][k]!='\0';k++);//cout<<"find the length of rows in an array";
			
			//cout<<"if the name is ends with i , y and a ,considers as a common name. ";
				if((str[i][k-1]!='i')&&(str[i][k-1]!='a')&&(str[i][k-1]!='y'))
					puts(str[i]);	}//cout<<"display the uncommon name ";
		
	return 0;}
