#include <iostream>
using namespace std;

int main(){
	
	// prblem : read a list of chracters(sentence)
	//cin.get()

	char ch;
	//cin >> ch 
	//read thhe first character 

	ch = cin.get(); 
	// this reads any single chracter including newlines/spaces
	
	while(ch!= '.'){
		//print the last chracter that we have read
		cout << ch;
		//update my chracter in the memory (read the next charcter)
		//read the rest of the chracters
		ch = cin.get();
	}
	
	return 0; 
}