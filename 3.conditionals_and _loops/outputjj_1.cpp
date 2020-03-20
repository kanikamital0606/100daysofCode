/*
#include <iostream>
using namespace std;
int main(){
	int x = 5;
	if(x<6){
		cout<<"Hello" ;
	}if(x == 5){
		cout<<"Hi";
	}
	else{
		cout <<"hey";
	}
} 
*/

/*
#include <iostream>
using namespace std;
int main() {
    int x = 15;
    if(x <= 15) {
        cout << "Inside if ";
    } else if(x == 15) {
        cout << "Inside else if ";
    }
    cout << x;
}
*/

//#include <iostream>
//using namespace std; 
//int main()
//{
//        int var1 = 5; 
//        int var2 = 6;
//        if ((var2 = 1) == var1)
//           cout << var2;
//        else 
//            cout  << (var2 + 1); 
//}

/*
#include <iostream>
using namespace std; 
int main() {
	int n ;
	cin >> n;
	
}
*/

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20, c = 100;
    if(a <= b || c <= b) {
        cout << "hello" << endl;
    }
    else if(a <= b || a <= c) {         //output:we are using logical OR operator ("||") i.e even one condition is true, final answer will be true.
        cout << "hi" << endl;
    }
    else {
        cout << "hey" << endl;
    }
}


