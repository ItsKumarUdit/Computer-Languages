#include<iostream>
#include<string>
using namespace std;


class student {
	public: 
	string name;
	int rollno;
};

class teacher {
	public:
		string subject;
		double salary;
};

class TA : public student, public teacher{
	
};

 
  
int main(){
	  TA obj;
	  obj.name = "Udit";
	  obj.rollno = 232;
	  obj.salary = 150.00;
	  obj.subject = "Coding";
	  
	  cout<<obj.subject;
}
