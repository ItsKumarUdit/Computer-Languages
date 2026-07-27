#include<iostream>
using namespace std;

int main(){
	// <-- This is the comments, used for taking notes;
	
	//Integers Variable
	
	int x; //Declaring fixed Varibale type;
	x = 5; //Storing integer value in variable x;
	
	int y = 6; //Storing integer value in variable y;
	
	//Increment 
	y++;
    x++;
    //Decrement
    y--;
    x--;
    
	//Arithmetic Operators 
	
	cout<<x+y<<endl;  // 11
	cout<<x*y<<endl;  // 30
	cout<<x-y<<endl;  // -1
	cout<<x/y<<endl;  // 0 Quotient will display
	cout<<x%y<<endl;  // 5 Remainder will display
	
	//Updating variable value;
	
	int a = 5;
	cout<<a<<endl; // 5 will print
	
	a = 10;
	cout<<a<<endl; // 10 will print
	a += 20; //a *= 10, a /= 2 etc...
	cout<<a<<endl;
}
