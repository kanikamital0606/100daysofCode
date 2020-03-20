/*
Author  : Kanika Mittal
Program :
					1 2 3 4 5
					1 2 3 4 
					1 2 3
					1 2
					1
Date    :   17/07/18
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
			cout <<  cn ;
			cn++;
		}
		nn --;
		cout<<endl;
		rows++;
	}



	return 0;
}
