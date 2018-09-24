//including libraries
#include <iostream>
using namespace std;

//declaring and defining function for finding minimum
	int minim(int a,int b){
//check for min value and assign it to the return varible
    int min;
    if(a<b)
        min=a;
    else if(b<a)
        min=b;
// return the value to main
    return min;
}
//declaring and defining function for finding maximum
	int maxim(int a,int b){
//check for max value and assign it to the return varible
    int max;
    if(a>b)
        max=a;
    else if(b>a)
        max=b;
// return the value to main
    return max;
}

	int sumevennumbers(int n,int m){
//summing the even numbers
    int s=0,i=n+1;
    while(i<m){
        if(i%2==0)
            s+=i;
        i++;
}
    return s;
}

	int sumoddnumbers(int n,int m){
//summing the odd numbers
    int s=0,i=n+1;
    while(i<m){
        if(i%2==1)
            s+=i;
        i++;
}
    return s;
}
	
	int sumSquareOddNumbers(int n,int m){
//summing square of odd numbers between
    int s=0,i=n+1;
    while(i<m){
        if(i%2==1)
            s+=(i*i);
        i++;
}
    return s;
}
	int sumSquareEvenNumbers(int n,int m){
//summing square of even numbers in between
    int s=0,i=n+1;
    while(i<m){
        if(i%2==0)
            s+=(i*i);
        i++;
}
    return s;
}
int main(){
//declaring varibles to get the return values
    int sumeven,sumodd,sumSquareOdd,sumSquareEven;
    int num1,num2,c,d;
// ask user for the values of the variables
    cout<<"Enter any two values\n";
    cin>>num1>>num2;
//call the function and assign its return value to a varible
    c=minim(num1,num2);
    d=maxim(num1,num2);
    num1=c;
    num2=d;
//getting output
    sumeven=sumevennumbers(num1,num2);
    sumodd=sumoddnumbers(num1,num2);
    sumSquareOdd=sumSquareOddNumbers(num1,num2);
    sumSquareEven=sumSquareEvenNumbers(num1,num2);
    cout<<"\n sum of even numbers between those numbers = "<<sumeven;
    cout<<"\n sum of odd numbers between those numbers = "<<sumodd;
    cout<<"\n sum of squares of odd numbers between those numbers = "<<sumSquareOdd;
    cout<<"\n sum of squares of even numbers between those numbers = "<<sumSquareEven;
    return 0;
}
