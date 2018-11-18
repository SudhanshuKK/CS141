#include<iostream>
using namespace std;

int main(){
	int sum,n,i;

cout<<"WE have to sum all the natural numbers between 1 and n\n"<<"enter n : ";
cin>>n;

for(i=1; i<=n; i++){
	sum=sum+i;

//or you can use while loop, for this replace for loop by
//	while(i<=n){
//	sum=sum+i;
//	i++;} 
	
}

cout<<"The sum of all natural numbers between 1 to "<<n<<" is : "<< sum<<endl;
return 0;
}
