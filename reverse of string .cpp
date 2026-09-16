#include<iostream>
using namespace std;
int main(){
	int i,right,left;
	char revstr[100];//cout<<"create a character array of size 100";
	cout<<"enter the name ";
	gets(revstr);
	//
	for(i=0;revstr[i]!='\0';i++);
	//cout<<"take two pointer, one is from zeroth index and another is from last index";
	left=0;
	right=i-1;
	while(right>left){
		if(right>left)
		swap(revstr[right],revstr[left]);//cout<<"use swap function to interchanged the element of array in place";
		left++;
		right--;}
	//cout<<"display the new array";
		puts(revstr);
		return 0;
}
