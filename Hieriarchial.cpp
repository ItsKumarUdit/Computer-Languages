#include<iostream>
#include<string>
using namespace std;

class person{
	public :
	string name;
	int age;
};
class student : public person{
	public: 
	int rollno;
};

class teacher : public person{
	public:
		string subject;
		double salary;
};

 
int main(){
	   teacher  t1;
	   t1.name = "Raj";
	   cout<<t1.name;
	   
}
