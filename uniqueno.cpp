#include <iostream>
using namespace std;

//problem unique number 2N+1;
//Given a list of no where every no occurs twice except one,find that unique number

//use xor same will cancel, out propety of XOR
int main(){

	int n;
	cin>>n;

	int no;
	int ans = 0;

	//Bitwise XOR operator
	//Helped not to use storage

	for(int i=0; i<n; i++){
		cin>> no;
		ans = ans^no;
	}

	cout << ans << endl;

	return 0;
}

/*Input:7
2 3 5 6 6 3 2
output: 5/*