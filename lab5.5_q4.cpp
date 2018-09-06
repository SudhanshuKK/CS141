#include <iostream>
using namespace std;
int main(){
	//declaring variables
	int i,j;
	//use of 'for' loop in making patterns with spaces and stars
	for(i=5; i>0; i--)
	{for ( j=i; j>0; j--)
	  {cout<< " ";}
	for(j=5; j>0; j--)
	{cout<<"*";}
	cout<<endl;
}
	return 0;
}
