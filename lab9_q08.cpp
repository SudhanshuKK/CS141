//Program to return length of a string by passing array as parameter without using strlen function
//including libraries
#include<iostream> 
using namespace std;

//function that returns length of string passed as parameter
int myStrLen(char *cstring){
    int len=0;
    while(*cstring!='\0')
    {
        len++;
        cstring++;
    }
    
    return len;
}

//driver/main function
int main(){   
    //variable declaration
    char str[30];
    //asks the user to enter a string
    cout<<"Enter string of utmost 30 characters\n";
    cin>>str;
    //displays length of string by calling the function myStrLen
    cout<<"Length of the string is "<<myStrLen(str)<<endl;
    //return statement
    return 0;
}
