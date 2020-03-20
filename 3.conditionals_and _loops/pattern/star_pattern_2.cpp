/*
Author  : Kanika Mittal
Program : star pattern          ******
								****
								**
Date    : 16/07/2018
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter no rows ";
	cin >> n;
	int  row  = 1;
	int nsp = n;
	while(row<=n){
		int csp = 1;
		while(csp<=nsp){
			cout << '*';
			csp ++;
			
		}nsp = nsp - 2;
		cout << endl;
		row++;
	}
	return 0;
}	
