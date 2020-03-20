#include<iostream>
using namespace std;
int main()
{
	
		int row, n , nst ,cst, nsp,csp;
        cin>>n;
        row=1;
        nst=1;
        nsp=n-1;
        while(row<=n)
        {
          csp=1;
          while(csp<=nsp)
          {
            cout<<" ";
            csp++;
          }
          cst=1;
          while(cst<=nst)
          {
            cout<<"*";
            cst++;
              
          }row++;
           nst+=2;
           nsp--;
           cout<<endl;
        }
  
}

