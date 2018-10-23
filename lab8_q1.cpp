//Write a program to find sum of all elements of an array. (Use functions)

//including libraries
#include<iostream>
using namespace std;

//Define function for adding
	int arr(int ar[], int size){
	int i;
	int sum=0;
//Use of 'for' loop to find the sum of all elements present in the array
	for(i=0;i<size;i++){
		sum=sum+ar[i];
	}
//Print the sum
	cout<<"Sum of all elements in array:"<<sum<<endl;
}

	//Main function
		int main(){
	//Ask user to put the size of the array
		int size;
		cout<<"We have to find sum of all elements of an array"<<endl<<"Enter size of the array"<<endl;
		cin>>size;
		int ar[size];
	//Ask user to input values to the array
		cout<<"Enter the values to array"<<endl;
	//Use of loop to input the values
		for(int i=0;i<size;i++){
		cin>>ar[i];
	}
	//Call the function
		arr(ar,size);
	
return 0;
}
