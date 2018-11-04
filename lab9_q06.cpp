//Program that takes an integer array as an input and displays the number of even entries as output
//including libraries
#include<iostream>
using namespace std;

//writing function that returns number of even entries
int countEven(int *arr,int size){
    int num = 0;
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)%2==0)
        {
            num++;
        }
    }
    
    //returns number of even entries
    return num;
}

//driver/main function
int main(){
    //variable declaration
    int arr[30],size;
    //asks user for size of the array
    cout<<"Enter the size of the array\n";
    cin>>size;
    //asks user to enter the array
    cout<<"Enter the integer array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    //displays the number of even entries
    cout<<"No. of even entries: "<<countEven(arr,size)<<endl;
    //return statement
    return 0;
}
