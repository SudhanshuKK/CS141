/*Write a program to find the 
(Use functions for each of the task in the question)*/

#include<iostream>
using namespace std;

//Defining functions
//Function for largest value
	int large(int ar[], int size){
	int x;
//sort array in descending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]<ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
	return ar[0];//To return the largest value
}

//Function for smallest value
int small(int ar[], int size)
{
	int x;
//sort array in ascending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]>ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
	return ar[0];//To return the smallest value
}

//Function for mean value
float mean(int ar[], int size)
{
	int i;
	float sum=0;
//Use loop to find the sum of all elements present in the array
	for(i=0;i<size;i++)
	{
		sum=sum+ar[i];
	}
	//To return the mean value
	float mean=(sum/size);
	return mean;
}

//Function for median value
	float median(int ar[], int size){
	int x;
//sort array in ascending order
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]>ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
//Put condition to find median for different size of array
	if(size%2==0){
		float x=ar[(size/2)-1];
		float y=ar[(size/2)];
		float median=(x+y)/2;
		return median;
	}
	else
	{
		return ar[((size+1)/2)-1];
	}
}

//Function for mode value
	int mode(int ar[],int size){
	int mode;
	int count=1;
	int countMode=1;
//Put condition to check each value with other ones
	for(int i=1;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]==ar[j])
			{
				count++;
			}
		}
		if(count>countMode)
		{
			countMode=count; //To make countMode as largest as possible for next numbers
			mode=ar[i];
		}
		count=1; //To start counting for next number
	}
	return mode;
}

	//Main function
		int main(){
	//Ask user to put the size of the array
		int size;
		cout<<"We have to find largest, smallest, mean, median,elements with highest frequency of all elements of array."<<endl<<"Enter size of the array"<<endl;
		cin>>size;
		int ar[size];
	//Ask user to input values to the array
	cout<<"Put input to array"<<endl;
	//Use loop to input the values
		for(int i=0;i<size;i++){
		cin>>ar[i];
	}

		//Call the functions
		cout<<"Largest value of array is:"<<large(ar,size)<<endl;
		cout<<"Smallest value of array is:"<<small(ar,size)<<endl;
		cout<<"Mean value of all the elements of array is:"<<mean(ar,size)<<endl;
		cout<<"Median value of all the elements of array is:"<<median(ar,size)<<endl;
		cout<<"Mode value of all the elements of array is:"<<mode(ar,size)<<endl;

return 0;
}
