//libraries
#include<iostream>
using namespace std;
//main fn
int main(){
	//let a be apples, m be mangoes and b be bananas
	//declaring variables
	int a,m,b;
	//variable to indicate variation number
	int n=1; 
	//loops        
	//loop to check if the equations a+m+b=100 and a+3m+0.5b=100 are satisfied or not
	
//nested for loops to check for all variations of the no. of fruits such that equations a+m+b=100 and a+3m+0.5b=100 are satisfied

	for(a=0;a<100;a++){

	for(m=0;m<100;m++){

	for(b=0;b<100;b++){

//checks if the equations a+m+b=100 and a+3m+0.5b=100 are satisfied or not and if it is satisfied then displays it
				if(a+m+b==100 && a+3*m+0.5*b==100){             
                                  
	//print the different types of variations in number of fruits bought separately
					cout<<"Variation "<< n <<" :"<< endl;                 
					cout<<"The no. of apples is "<< a <<endl;
					cout<<"The no. of mangoes is "<< m <<endl;
					cout<<"The no. of bananas is "<< b <<endl<<endl;
                                        n++;                                             
} 
		//else run the loop again 
                               else
                                   continue; 
}
}
}

	//return statement
	return 0;
}
