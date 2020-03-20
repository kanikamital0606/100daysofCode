/*
Author  : Kanika Mittal
Program : Program to print full pyramid using *
						   **
						  ****
						 ******
						********
Date    :  17 /07/18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<< "Enter the value of rows";
	cin >> n;
	int row = 1;
	int nsp = n-row;
	int nn = 1;
	while(row<=n){
		int csp = 1; 
		while(csp<=nsp){
			cout << " ";
			csp++;
		}
		int cn = 1;
		//int k = n-row;
		while(cn!=2*nn-1){ 
			cout<< "*";
			cn++;
		}
		nn++;
		nsp--;
		
		cout << endl;
		row++;
		
	}

	return 0;
}
