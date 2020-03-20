/* Given 3 values: Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W)
 you need to convert all Fahrenheit values from Start to End at the gap of W, 
 into their corresponding Celsius values and print the table. */
 
#include<bits/stdc++.h>
using namespace std ;
int main(){
	float cel;
	int s,e,w;
	//cout<< "values of s, e, w" << endl;
	cin >> s >> e >> w;
	while(s <= e){
		int(cel) = (s-32)*5/9;
		cout<<s<<" "<<cel<<endl; 
		s=s+w;
		
	}
}
  

