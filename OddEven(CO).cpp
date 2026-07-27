#include<iostream>
using namespace std;

class oddeven{
	int a;
	public:
		void getInput();
		void checkOE();
};

void oddeven::getInput(){
	cout<<"Enter any number: "<<endl;
	cin>>a;
}

void oddeven::checkOE(){
	if(a%2 == 0){
		cout<<"Even";
	}
	else{
		cout<<"Odd";
	}
}

int main(){
	oddeven obj;
	obj.getInput();
	obj.checkOE();
}
