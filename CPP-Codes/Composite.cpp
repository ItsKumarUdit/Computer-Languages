#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your Number: "<<endl;
	cin>>num;
	 
	int i;
	for(i = 2; i < num/2; i++){
		if(num % i == 0)
		cout<<"It's a Composite number"<<endl;
		//break;
		else
		cout<<"Not a Composite number"<<endl;
		break;
	}
}
