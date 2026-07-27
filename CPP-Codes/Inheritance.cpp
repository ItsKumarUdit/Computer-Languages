#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		int age;
		
		person(string name, int age){
			this->name=name;
			this->age=age;
		}
		~person(){
	        cout<<"Main Class Destructor..\n";
        }   
		 
};

 

class student : public person{
	public: 
	int rollno;
	
	student(string name, int age, int rollno) : person(name, age){
		this->rollno = rollno;
	}
	
	void getinfo(){
		cout<<"Name = "<<name<<endl;
		cout<<"Age = "<<age<<endl;
		cout<<"rollno = "<<rollno<<endl;
	}
	~student(){
	 cout<<"Child class Destructor..\n";
	   
	}
};
  
int main(){
	student S1("Raj",12,232);
	S1.getinfo();
}
