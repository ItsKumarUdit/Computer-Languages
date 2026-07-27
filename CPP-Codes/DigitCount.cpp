#include<iostream>
using namespace std;

int main(){
	int num, count=0;
	cout<<"Enter any number: "<<endl;
	cin>>num;
	int i;
	for(i = num; i>0; i = i/10){
		count++;
	}
	cout<<"Number of digit is: "<<count;
}
