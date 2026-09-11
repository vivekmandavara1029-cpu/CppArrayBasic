#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,j,k,n,m ;
	//cout<<"1st array n ";
	cout<<"enter the size of array n = ";
	cin>>n;
	int arrayn[n];
	for(i=0;i<n;i++){
	cout<<"enter the value "<<i+1<<" element of array = ";
	cin>>arrayn[i];}
	cout<<" "<<endl;
	cout<<" "<<endl;
	//cout<<"2nd array m ";
	cout<<"enter the size of array m = ";
	cin>>m;
	int arraym[m];
	for(i=0;i<m;i++){
	cout<<"enter the value "<<i+1<<" element of array = ";
	cin>>arraym[i];}
		int arrayk[m+n];
	//cout<<" 3rd array for merge both the array (1st and 2nd)";
i=j=k=0;
//cout<<"this loop use for filling the element of array in arrayk";
 while((i<n)&&(j<m)){
if(arrayn[i]<=arraym[j]){
arrayk[k]=arrayn[i];
i++;}
else{
arrayk[k]=arraym[j];
j++;}
k++;}
//cout<<" this loop use for filling the leftover element of both arrays";
 while(j<m){
arrayk[k]=arraym[j];
j++;
k++;}
while(i<n){
	arrayk[k]=arrayn[i];
	i++;
	k++;}
 for(i=0;i<(m+n);i++){
cout<<arrayk[i]<<endl;}
  return 0;}
