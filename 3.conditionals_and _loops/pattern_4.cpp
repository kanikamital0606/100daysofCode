#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int i = 1;
	while(i<=n) {
		int k = n-1;
		while(k >= i){
			cout << " ";
			k = k-1;
		}
		int j = 1;
			int temp=i;
		while(j <= i){
	
		cout<<temp;
		temp++;
		j++;
		}
		cout << endl;
		i = i+1;
	}
}
