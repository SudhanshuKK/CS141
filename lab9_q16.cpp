//Program to show string by shifting top character of string to the right
//****************************************************//
/*Execution example)
Input about 10 characters of string
abcd1234EFGH
H
GH
FGH
EFGH
4EFGH
34EFGH
234EFGH
1234EFGH
d1234EFGH
cd1234EFGH
bcd1234EFGH
abcd1234EFGH
*///**************************************************//
//including libraries
#include <iostream>
using namespace std;   

//main/driver function
int main(){
    //variable declaration
    char str[20], *p;
    //asks user to enter an array
    cout<<"Input about 10 characters of string"<<endl;
    cin>>str;
    
    //pointer variable refers to address of string
    p = str;
    
    //show string by shifting top character of string to right
    while(*p!='\0')
    {
        p++;
    }
    
    while((p--)!=str)
    {
        cout<<p<<endl;
    }
    
    //return statement
    return 0;
}
