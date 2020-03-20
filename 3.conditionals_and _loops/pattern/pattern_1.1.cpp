/*
Author  : Kanika Mittal
Program : no pattern
Date    :   16/07/18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter the value if n";
	cin >> n;
	int rows = 1;
	int nn = 1;
	while(rows<=n){
		int cn = 1;
		int p = rows;
		while(cn <= nn){
			cout << p;
			cn++;
			p++;	
		}
			cout << endl;
	        nn++;
	        rows++ ;
		
	}

}
