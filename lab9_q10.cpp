//Program to reverse a string using a function with void return type
//including libraries
#include<iostream>
using namespace std;    

//function that reverses a string passed as a parameter
void revString(char *str)    
{
    char *ptr;
    ptr = str;
    while(*str!='\0')
//displays the reversed string    
	{
        str++;
    }
    
    while((str--)!=ptr)
    {
        cout<<*str;          
    }
    
    cout<<endl;
}

//main/driver function
int main()     
{
    //variable declaration
    char arr[20];
    //asks user to enter a string
    cout<<"Enter a string of utmost 10 characters\n";
    cin>>arr;
    //displays reversed string
    revString(arr);
    //return statement
    return 0;
}
