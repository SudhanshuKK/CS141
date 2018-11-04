//Program to implement own version of strcmp

//including libraries
#include<iostream>
using namespace std;  

//writing progran
void own_strcmp(char *p1,char *p2,char *str1,char *str2)
{
    int l=0,m;
    str1 = p1;
    str2 = p2;
    while(*p1!='\0' || *p2!='\0')
    {
        if(*p1>*p2)
        {
            l++;
        }
        
        else 
        {
            l--;
        }
    
    if(l>0)
       m=1;
       
    else if(l<0)
       m=-1;
       
    else
       continue;
       
    p1++;
    p2++;
    }
    
    if(m==1)
    {
        cout<<str1<<" is greater than "<<str2<<endl;
    }
    
    else if(m==-1)
    {
        cout<<str2<<" is greater than "<<str1<<endl;
    }
}

//driver/main function
int main(){
    //variable declaration
    char str1[20],str2[20],*p1,*p2;
    //asks user to enter the first string
    cout<<"Enter first string\n";
    cin>>str1;
    //asks user to enter the second string
    cout<<"Enter second string\n";
    cin>>str2;
    
    //displays the result
    own_strcmp(str1,str2,p1,p2);
    
    //return statement
    return 0;
    
}
