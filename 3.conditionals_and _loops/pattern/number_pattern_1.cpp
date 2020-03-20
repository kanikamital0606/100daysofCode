/*
Author  : Kanika Mittal
Program :
			1
			12
			123
			1234
Date    :  16/07/18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter no  of rows ";
	cin >> n;
	int rows = 1;
	int nn = 1;
	while(rows <=n){
		int cn = 1;
		while(cn<=nn){
			cout <<cn;
			cn ++;
		}
		nn++;
		cout<<endl;
		rows++;
	}

	return 0;
}
