//Code that contains a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.

//including libraries
#include<iostream> 
using namespace std;

 //function definition with boolean return type
bool funcontain(char *str,char ch){ 
    int count = 0;
    while(*(str++)!='\0')
    {
        if(*str == ch)
        {
            count++;
        }
    }
    
    if(count != 0)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

//driver/main function
int main(){
    //variable declaration
    char arr[30],ch;
    //asks user to enter a string 
    cout<<"Enter a string of utmost 20 characters\n";
    cin>>arr;
    //asks user to enter a character which is to be searched inside the string given as input
    cout<<"Enter character to be searched\n";
    cin>>ch;
    //function call
    cout<<funcontain(arr,ch);
    //return statement
    return 0;
}
