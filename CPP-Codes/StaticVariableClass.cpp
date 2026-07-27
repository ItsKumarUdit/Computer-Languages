#include<iostream>
using namespace std;

class abc{
	public:
	static int x;
	int incrementX(){
		return x = x + 1;
	}
};
int abc::x = 0;

int main(){
	abc obj1;
	obj1.x = 0;
	cout<<obj1.incrementX()<<endl; //1 will print
	
	abc obj2;
	obj2.x = 100;
	cout<<obj2.incrementX()<<endl; //101 will print
	cout<<obj1.x<<endl; // Again 101 will print
}
