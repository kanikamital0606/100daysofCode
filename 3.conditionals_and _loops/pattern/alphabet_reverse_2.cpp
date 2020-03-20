/*
Author  : Kanika Mittal
Program :Program to print half pyramid using alphabets
								E
								DE
								CDE
								BCDE
								ABCDE
Date    :   17/07/18
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int row ,nnt,cst;
	
	cin>>n;
	char ch='A'+n-1;
	row=1;
	nnt=1;
	while(row<=n)
	{
		cst=1;
		while(cst<=nnt)
		{
			cout<<ch;
			ch++;
			cst++;
			
		}
		row++;
		ch=ch-nnt-1;
		nnt++;
		cout<<endl;
	}
}
