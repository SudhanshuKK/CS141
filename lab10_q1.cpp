//including libraries
#include<iostream>
using namespace std;

//define class
class rect {
	public:
	//length
	double length;
	//breadth
	double breadth;
	//member function declaration and defination
	double getarea(void){
		return length*breadth;
	}
	double getperimeter(void){
		return 2*(length+breadth);
	}
};

// main/driver function
	int main(){
//initialize
	rect rect1,rect2;
	cout<<"Enter length of 1st rectangle"<<endl;
	cin>>rect1.length;
	cout<<"Enter breadth of 1st rectangle"<<endl;
	cin>>rect1.breadth;

	cout<<"Enter length of 2nd rectangle"<<endl;
	cin>>rect2.length;
	cout<<"Enter breadth of 2nd rectangle"<<endl;
	cin>>rect2.breadth;
	cout<<"Area of the 1st rectangle is :"<<rect1.getarea()<<endl<<"Perimeter of 1st rectangle id :"<<rect1.getperimeter()<<endl;
	cout<<"Area of the 2nd rectangle is :"<<rect2.getarea()<<endl<<"Perimeter of 2nd rectangle id :"<<rect2.getperimeter()<<endl;

if(rect1.getarea()>rect2.getarea())
	cout<<"1st rectangle has more area"<<endl;
else if(rect1.getarea()<rect2.getarea())
	cout<<"2nd rectangle has more area"<<endl;
else
	cout<<"Both have same area"<<endl;
if(rect1.getperimeter()>rect2.getperimeter())
	cout<<"1st rectangle has more perimeter"<<endl;
else if(rect1.getperimeter()<rect2.getperimeter())
	cout<<"2nd rectangle has more perimeter"<<endl;
else
	cout<<"Both have same perimeter"<<endl;
return 0;
}
