#include <iostream>
using namespace std;
int main(){
	int i,j;
	//running main loop 5 times
	while(i<=5){
	//printing required numbers of spaces
	for(j=0; j<(5-i); j++)
	cout<<" ";
	//print numbers of stars
	for(j=((2*i)-1);j>0;j--)
	cout<<"*";
	cout<<endl;
	i++;
}
	return 0;
}
