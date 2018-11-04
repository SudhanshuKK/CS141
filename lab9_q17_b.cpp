//Program to implement own version of strcat

//including libraries
#include<iostream>  
using namespace std;

//driver function
int main()         {
    //variable declaration
    char str1[20],str2[20],*p1,*p2;
    //initializing the pointers
    p1 = str1;
    p2 = str2;
    //asks user to enter the strings
    cout<<"Enter first string\n";
    cin>>str1;
    cout<<"Enter second string\n";
    cin>>str2;
    //displays concatenated string
    cout<<p1<<p2<<endl;
    
    //return statement
    return 0;
}
