//including the libraries
#include <iostream>
using namespace std;

//x^y = xxxxxxx.......y times

//function for obtaining power of a base
	int power(int x, int y){
		if (y!=0)
		return(x*power(x,y-1));
		else
		return 1;
}
	//main function/ driver function
	int main(){
	int x,y,z;
		cout<<"enter the base and power respectively"<< endl;
		cin >> x>>y;
//calling the function
			z = power(x,y);
			cout<< "the value of "<< x<< "^"<<y<< " is "<<z<<endl;
//returning function
			return 0;
}


/*analyse the mistaken you have done in it
int pow, i;
i=1;
while(i<y){
pow = pow*x;
i++;
return pow;
}*/
