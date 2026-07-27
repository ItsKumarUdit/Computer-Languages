#include<iostream>
using namespace std;

void swap(int& x, int& y){ //Not valid in C
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int x = 2, y = 5;
	cout<<x<<" "<<y<<endl;
     
    swap(x,y);
     
	cout<<x<<" "<<y;
} 
