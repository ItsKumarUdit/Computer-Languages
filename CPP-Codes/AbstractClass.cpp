#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void draw() = 0; //Pure virtual Function = Abstract class;
};

class Circle : public Shape{
	public:
		void draw(){
			cout<<"This is a Circle"<<endl;
		}
};

int main(){
	Circle obj;
	obj.draw();
	//Shape S1;
}
