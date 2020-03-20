/*
Author  : Kanika Mittal
Program :Program to print half pyramid using alphabets
								A
								B B
								C C C
								D D D D
								E E E E E
Date    :   17/07/18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter no  of rows ";
	cin >> n;
	int rows = 1;
	int nn = 1;
	char input = 'A';
	while(rows <= n){
		int cn = 1;
		while(cn <= nn){
			cout<<input;
			
			cn++;
		}
		nn++;
		cout << endl;
		rows++;
		input= input+ 1;
	}
	return 0;
}
