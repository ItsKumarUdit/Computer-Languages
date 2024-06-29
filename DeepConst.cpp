#include<iostream>
#include<string>
using namespace std;

class student{
	public: 
	string name;
	float* cgpaptr;
	
	student(string name, float cgpa){
		this->name = name;
		cgpaptr = new float;
		*cgpaptr = cgpa;
	}
	
	void PrintData(){
		cout<<"Name = "<<name<<endl;
		cout<<"CGPA = "<<*cgpaptr<<endl;
	}
};

int main(){
	student S1("Udit",9.24);
	student S2(S1);
	S1.PrintData();
	*(S2.cgpaptr)= 9.25;
	S1.PrintData(); //Both S1 and S2 student cgpa will change
}
