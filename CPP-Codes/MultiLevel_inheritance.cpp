#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		int age;
};

class student : public person{
	public: 
	int rollno;
};

class gradStudent : public student{
	public: 
	string researchArea;
};
  
int main(){
	 gradStudent S1;
	 S1.name = "Raj";
	 S1.age = 19;
	 S1.researchArea = "Qrantum Physics";
	 
	 cout<<S1.name<<", "<<S1.age<<", "<<S1.researchArea<<endl;
}
//Hybrid Inheritance - Combination of all inheritance;
