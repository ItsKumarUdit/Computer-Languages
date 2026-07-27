#include<iostream>
using namespace std;

int main(){
	int x = 5;
	
	int* ptr = &x;
	
	cout<<ptr<<endl; //Address will print
	cout<<*ptr<<endl; //Value will print 
}
