#include<iostream>
using namespace std;
int main(){
	int n = 4;
	int i=1, j, temp;
	while(i<=n)
	{   temp=i;
		j=1;
		while(j<=i)
		{
			cout<<temp;
			temp++;
			j++;
				
		}
		
		cout<<endl;
		i++;
	}
}
