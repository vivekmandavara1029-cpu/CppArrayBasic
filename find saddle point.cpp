#include<bits/stdc++.h>
using namespace std;
int main (){
	int i,j,n,m,k,l,min,col,flag=1; ;
	cout<<"enter the size row of array n = ";
	cin>>n;//cout<<" n representing the row of size ";
	cout<<"enter the size of column of array m = ";
	cin>>m;//cout<<" m representing the column of size ";
	int arr[n][m];
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			//cout<<" fill the elements of an array ";
			cout<<"enter the value of "<<i+1<<"  row and "<<j+1<<"  column of the array ";
			cin>>arr[i][j];}
			cout<<endl;}
			//cout<<"find the saddle point in the given array";
			for(i=0;i<n;i++){
				arr[i][0]=min;
				for(j=1;j<m;j++){
					if(arr[i][j]<min){
					min=arr[i][j];
					col=j;}}
					flag=1;
					for(k=0;((k<m)&&(flag==1));k++){
						if(min<arr[k][col])
						flag=0;}
		//cout<<" if saddle point is find then flag==1;
	if(flag==1)											
cout<<"the saddle point present in "<<i<<" row and "<<col<<" column and the value is  "<<arr[i][col];
return 0;
cout<<endl;}
cout<<"there is no saddle point present in the array";
	return 0;}
