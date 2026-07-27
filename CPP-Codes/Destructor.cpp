#include<iostream>
#include<string>
using namespace std;

class student{
	public: 
	string name;
	float* cgpaptr;
	
	//Constructor
	student(string name, float cgpa){
		this->name = name;
		cgpaptr = new float;
		*cgpaptr = cgpa;
	}
	//Destructor
	~student(){
	 cout<<"Hi, I have deleted everthing\n";
	 delete cgpaptr;	//To avoid memeory leak;
	}
	
	void PrintData(){
		cout<<"Name = "<<name<<endl;
		cout<<"CGPA = "<<*cgpaptr<<endl;
	}
};

int main(){
	student S1("Udit",9.24);
	 
	S1.PrintData();
	 
}
