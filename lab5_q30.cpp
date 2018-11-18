#include<iostream>
using namespace std;

int main(){
	int n, i=1, product;
cout<<"We have to write the multiplication table of the entered number\n"<<"Enter the number : ";
cin>>n;

for(i; i<=10; i++){

cout<<n <<" * "<<i<<" = "<<n*i<<endl;
}
return 0;
}
