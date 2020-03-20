/*
Author  : Kanika Mittal
Program : gcd 
*/

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,b%a);
}

int main(){
	int a = 10;
	int b = 20;
	int res = gcd(a,b);
	cout<<"The gcd of a and b is: "<<res;
	return 0;
}
