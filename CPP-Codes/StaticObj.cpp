#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"Constructor\n"; //1
		}
		~A(){
			cout<<"Destructor\n"; //3
		}
};

int main(){
	if(true)
	static A obj;  // static obj live till the program exit;
	
	cout<<"Main Function end"<<endl;  //2
}
