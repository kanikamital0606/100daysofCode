#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int i;

	for(i=2; i<n; i++){
		if(n%i==0){
			cout << n << " is not prime"<< endl;
			break;
		}
	}
	
	//most important condition to check prime
	
	if(i==n){
		cout << n <<"is prime"<< endl;
	}

	return 0;

}