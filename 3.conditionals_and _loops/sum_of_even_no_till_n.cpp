#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int sum = 0;
	cout << "Enter the value of till you want to sum " << endl ;
	cin >> n;
	int i=2;
	while(i <=n){
		if((i%2)== 0) {
			sum = sum +i;
			
		}
		i = i+1 ;
	}
	cout << "sum of all even numbers till n is : " <<  sum;

}


