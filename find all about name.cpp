#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,vowels=0,space=0,words=1;
	char str[100];
	cout<<"enter the name ";
	gets(str);
	 for(i=0;str[i]!='\0';i++){
	 	if(str[i]==' ')
	 	space=space+1;
	 	if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))	 
	 	vowels=vowels+1;
	 	if((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))	 
	 	vowels=vowels+1;}
	 	for(i=1;str[i]!='\0';i++){
	 	if((str[i]==' ')&&(str[i+1]!=' '))
	 	words=words+1;}
	 cout<<"the name of length is "<<i<<endl;
	 cout<<vowels<<" vowels present in the string "<<endl;
	 cout<<space<<" space present in the string "<<endl;
	 cout<<words<<" words in a string";
		return 0;}
