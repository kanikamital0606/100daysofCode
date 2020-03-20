/*Program to calculate no of digits
whitespaces, alphabets and other charchters terminated by S */

#include <iostream>
using namespace std;

int main(){

	int digits=0;
	int alphabets=0;
	int spaces =0;
	int other =0;

	char ch;
	cin >> ch;

	while(ch!='s'){
		if(ch>='0') and (ch<='9')){
			digits++
		}
		else if(ch>='a' and ch<='z') and (ch>='A' and ch<='Z')){
			alphabets++;
		}
		else if(ch=='') or (ch=='\n' or(ch=='\t')){
			spaces++;
		}
		else{
			other++;
		}
		ch=cin.get();
	}
	cout<<"Digits"<<digits<<endl;
	cout<<"Alphabets"<<alphabets<<endl;
	cout<<"Spaces"<< spaces<< endl;
	cout <<"other"<< other<<endl;
	return 0;
}