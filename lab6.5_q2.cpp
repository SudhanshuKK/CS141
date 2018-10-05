//library function
#include<iostream>
using namespace std;

//function to accept input from user
int accept(){      

	 //accepts sales per week
        int sales;
	cout<<"Enter the number of pairs of shoes sold per week"<<endl;
	cin>>sales;      
        return sales;     
}

//returns salary of Rs 600 per week
int op1(){
	int salary=600; 
	return salary;
}

//returns a salary of Rs 7 per hour(for 40 hrs it is rs.280) + 10% commission on the sales
int op2(int sales){ 
	int salary;
	salary = 7*40 + 0.1*sales*225;
	return salary;
}

//returns salary of 20% on commission along with Rs 20 per pair of shoes without a separate fixed amount of salary
int op3(int sales){  
	int salary;
	salary = 1.2*sales*20;
	return salary;
}

//function to display the final salary of salesperson
void display(int salary,int x){

//displays the option most beneficial to the salesperson
	cout<<"The most beneficial option for the salesperson is option "<<x<<endl;     
//display the final salary
	cout<<"The final salary of the salesperson is "<<salary<<endl;
}

//driver function
int main(){

	//variable declaration
	//variable y keeps track of the most suitable option
	int salary,sales,temp1,temp2,temp3,y;    
	
	//asks user for the input of no. of pairs of shoes sold per week
	sales=accept();    
	
	//temporary variables temp1,temp2,temp3 to store the possible values of variable salary
	temp1=op1();          
	temp2=op2(sales);
	temp3=op3(sales);

	//program for comparing all the possible values of salary and assigns the same to variable salary
	if(temp1>temp2 && temp1>temp3){
		salary=temp1;
		y=1;
}
	else if(temp2>temp1 && temp2>temp3){
		salary=temp2;
		y=2;
}
	   else{
		salary=temp3;                        
		y=3;
}
	//displays the suitable option and salary of the salesperson
	display(salary,y);    
	// return statement
	return 0;
}
