#include <iostream>
using namespace std;
int main(){
	//declaring variables
	int i,j;
	//running 'for'loop to make patterns
	for(i=0; i<5; i++){
	  for(j=0; j<i; j++)
	cout<<" ";
	for (j=0; j<5; j++)
	cout<<"*";
	cout<<endl;
}
	return 0;
}
