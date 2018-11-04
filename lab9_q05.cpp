//Program to prints characters of a string in reverse order
//including libraries
#include<iostream>
using namespace std;

//writing function that reverses the order of a string
void own_strrev(char str[],char *ptr)     {
    ptr = str;
    while(*ptr!='\0')
    {
        ++ptr;
    }
    
    while((ptr--)!=str)
    {
        cout<<*ptr;
    }
  
    cout<<endl;
    
}

//driver/main function
int main(){
    //variable declaration
    char s[10] = "abcde";
    char *cptr;
    //displays the string s in reverse order
    own_strrev(s,cptr);
    //return statement
    return 0;
}
