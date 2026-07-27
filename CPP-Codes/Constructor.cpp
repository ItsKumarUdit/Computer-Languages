#include<iostream>
#include<string>
using namespace std;

class Constructor{
	public:
		int a, b;
		 
		//Non-Parameterlized constructor
		Constructor(){
		 	cout<<"Hii, This is Raj"<<endl;
		 }
		 
		//Parameterlized constructor
		Constructor(int a, int b){
			this->a = a;
			this->b = b;
			 
		}
		//Custom copy constructor (Shallow Copy)
		Constructor(Constructor &orgobj){
			this->a = orgobj.a;
			this->b = orgobj.b;
		}
		void CalSum(){
			cout<<"Sum = "<<a+b<<endl;
		}
};

int main(){
	Constructor obj;
	Constructor obj1(10,20);
	obj1.CalSum();
	Constructor obj2(obj1);
	cout<<"a = "<<obj2.a<<endl;
}
