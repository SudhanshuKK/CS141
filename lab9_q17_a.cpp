//Program to implement own version of strcpy
//including libraries
#include<iostream> 
using namespace std;   

//writing function
void own_strcpy(char *str,char *p)
{
    while(*str!='\0')
    {
        *p = *str;
        str++;
        p++;
    }
    
    *p = '\0';
}

//driver/main function
int main(){
    //variable declaration
    char str[20],p[10];
    //asks user to enter string
    cout<<"Enter the string\n";
    cin>>str;
    own_strcpy(str,p);
    
    //displays copied string
    cout<<"Copied string: "<<endl;
    cout<<p<<endl;
    
    //return statement
    return 0;
    
}
