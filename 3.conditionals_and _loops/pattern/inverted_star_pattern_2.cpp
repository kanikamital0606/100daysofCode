/*
Author  : Kanika Mittal
Program : 
				* * * * *
				* * * *
				* * * 
				* *
				*
Date    : 17/07/18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<< "Enter the value of rows";
	cin >> n;
	int rows = 1;
	int nn = n;
	while(rows<=n){
		int cn = 1;
		while(cn<=nn){
			cout<< '*';
			cn++;
		}
		nn--;
		cout <<endl;
		rows++;
	}
	return 0;
}  
