//Program to display the kth smallest and kth largest element of the integer array
//including libraries
#include <iostream>
using namespace std; 

int ksmall(int arr[],int size,int k)       //function to print the kth smallest element in the array using selection sort
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])   
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
  return arr[k-1];          //returns the kth smallest element after sorting 
}


int klarge(int arr[],int size,int k)   //function to print the kth largest element in the array using selection sort
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
  return arr[k-1];              //returns the kth largest element after sorting
}

//main function
int main()
{
    //variable declaration
    int arr[20],size,k1,k2;
    //asks user for the input
    cout<<"Enter the size of the array\n";
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    //for loop to accept the elements as input
    for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    //asks user to enter the value of k
    cout<<"Enter the cardinality of the smallest element\n";
    cin>>k1;
    cout<<"Enter the cardinality of the largest element\n";
    cin>>k2;
    //displays the output
    cout<<"The kth largest element is "<<klarge(arr,size,k1)<<endl;
    cout<<"The kth smallest element is "<<ksmall(arr,size,k2)<<endl;
    //returns statement
    return 0;
}
