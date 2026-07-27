#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your Number: "<<endl;
	cin>>num;
	 
	int i;
	for(i = 2; i < num/2; i++){
		if(num % i == 0)
		cout<<"Not a Prime number"<<endl;
		 
		else
		cout<<"Prime Number"<<endl;
		break;
	}
}
