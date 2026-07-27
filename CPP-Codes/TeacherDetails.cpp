#include<iostream>
#include<string>
using namespace std;

class Teacher{
	private: 
	double salary; //Data hidding
	
	public: 
	string name;
	string dept;
	 
	
	void changeDept(string newdept){
		dept = newdept;
	}
	
	void setSalary(float s){
		salary = s;
	}
	
	double getSalary(){
		return salary;
	}
};

int main(){
	Teacher obj1;
	obj1.name = "Udit";
	obj1.dept = "CSE";
	obj1.setSalary(150.01);
	
	cout<<"Name = "<<obj1.name<<endl;
	cout<<"Department = "<<obj1.dept<<endl;
	cout<<"Salary = "<<obj1.getSalary()<<endl;
}
