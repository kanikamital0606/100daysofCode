#include<iostream>
 
using namespace std;
 
int main()
{  
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
 
    if(ch>=65&&ch<=90)
        cout<<endl<<"1";
    else if(ch>=97&&ch<=122)
         cout<<endl<<"0";
	else
         cout<<endl<<"-1";
    return 0;
}
