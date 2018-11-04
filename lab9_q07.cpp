//Function that returns a pointer to the maximum value of an array of double's

//including libraries
#include<iostream>
using namespace std; 


double* own_max(double *a,int size)
{
    double *ptr;
    ptr = a;
    for(int i=0;i<size;i++)
    {
        if(a[i]>*ptr)
        {
            ptr = &a[i];
        }
    }
    
    if(size!=0)
    {
        return ptr;
    }
    
    else
    {
        return NULL;
    }
}

//driver/main function
int main(){
    //variable declaration
    double arr[30];
    int size;
    //asks user to enter size of double array
    cout<<"Enter the size of the array\n";
    cin>>size;
    //asks user to enter the array
    cout<<"Enter the entries of the double array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    //displays the maximum value of array along with address
    cout<<"The maximum entry of the array is "<<*own_max(arr,size)<<endl;
    cout<<"The corresponding address of the entry is "<<own_max(arr,size)<<endl;
    //return statement
    return 0;
}
