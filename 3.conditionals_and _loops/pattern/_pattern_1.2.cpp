/*
Author  : Kanika Mittal
Program : 
				*
				**
				***
				****
				
Date    :  16 /07/18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n;
	 cout << "enter n";
	 cin>>n;
	 int row = 1;
	 int nn = 1;
	 while(row<=n){
	 	int cn = 1;
	 	while(cn<=nn){
	 		cout << "*";
	 		cn++;
		 }
	 	nn++;
	 	cout<<endl;
	 	row ++;
	 }
	return 0;
}
