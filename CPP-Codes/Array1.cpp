#include<iostream>
using namespace std;

int main(){
	//Method 1
	int marks[3] = {10, 20, 30};
	
	//Method 2
	marks[0] = 10;
	marks[1] = 20;
	marks[2] = 30;
	
	//For printing : Method 1
	cout<<marks[0]<<" ";
	cout<<marks[1]<<" ";
	cout<<marks[2]<<" ";
	
	//Method 2
	int i;
	for(i=0; i<3; i++)
	cout<<marks[i]<<" ";  //Printing values
	
}
