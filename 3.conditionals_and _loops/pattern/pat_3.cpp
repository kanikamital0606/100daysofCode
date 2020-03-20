/*
Author  : Kanika Mittal
Program : 
Date    :   /  / 18
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int z=1;
	for(int i=0;i<5;i++){
		for(int j=4;j>i;j--){
			cout<<" ";
		}
		for(int k=0;k<z;k++){
			cout<<z-k;
		}
		z+=2;
		cout<<endl;
	}

	return 0;
}
