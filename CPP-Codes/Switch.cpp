#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	char opt;
	cout<<"Enter 1st number: "<<endl;
	cin>>num1;
	cout<<"Enter 2nd number: "<<endl;
	cin>>num2;
	cout<<"Enter operation  to perform: "<<endl;
	cin>>opt;
	
	switch(opt){
		case '+' : cout<<"Sum of the given number is: "<<num1+num2<<endl;
		break;
		case '-' : cout<<"Sum of the given number is: "<<num1-num2<<endl;
		break;
		case '*' : cout<<"Sum of the given number is: "<<num1*num2<<endl;
		break;
		case '/' : cout<<"Sum of the given number is: "<<num1/num2<<endl;
		break;
		default : cout<<"Invalid option"<<endl;
		
	}
}
