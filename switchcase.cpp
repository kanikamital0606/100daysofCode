#include <iostream>
using namespace std;
int main(){

	/*design a menu - where  button gives the corresponding time
	B- Burger
	M- Maggi
	P- Pepsi
	I- Pizza
	D- Dosa 
	... so on 
	*/

	char ch;
	ch=cin.get();

	switch(ch){
		case 'B':cout<< "Burger"<< endl;
			break;
		case 'm':
		case 'M':cout<< "Maggi"<< endl;
			break;
		
		case'p':
		case 'P':cout<< "Pepsi"<< endl;
			break;
		
		case 'I':cout<< "Pizza"<< endl;
				break;

		case 'D':cout<<"Dosa"<< endl;
			break;
		
		default:cout<<"Item not available"<<endl;

	}
	return 0;
}