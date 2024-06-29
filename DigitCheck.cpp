#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter any number: "<<endl;
	cin>>num;
	if(num > 99 && num < 1000)
	cout<<"Three digits number"<<endl;
	else
	cout<<"Not a three digit number"<<endl;
}
