#include<iostream>
using namespace std;

class ParentClass{
	public:
		void Print(){
			cout<<"Printing..."<<endl;
		}
		virtual void Show(){
			cout<<"In Parent class show.."<<endl;
		}
};

class ChildClass : public ParentClass{
	public:
		void Print(){
			cout<<"Printing2.0..."<<endl;
		}
		virtual void Show(){
			cout<<"In Child class show.."<<endl;
		}
};

int main(){
	ChildClass obj1;
	obj1.Print();
	obj1.Show();
	
	ParentClass obj2;
	obj2.Print();
	obj2.Show();
}
