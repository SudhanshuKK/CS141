//Program to implement own version of strlen
#include<iostream>
using namespace std;   

//main function
int main(){
    //variable declaration
    char str[20],*p;
    int length=0;
    p=str;
    //asks user for the input of a string
    cout<<"Enter a string less than 15 characters\n";
    cin>>str;
    for(int i=0;*(p+i)!='\0';i++)
    {
        length++;
    }
    
    //displays the length
    cout<<"The length of the string is "<<length<<endl;
    
    //return statement
    return 0;
}
