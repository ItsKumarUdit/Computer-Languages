#include<iostream>
using namespace std;

class Addition{
	private: //If private insn't written then bydefault it work as private
	int a, b;
	
	public : 
	void getData();
	void CalSum();
};

 //Outside Defination
 
void Addition::getData(){ // :: -> Scope resolution operator
	cout<<"Enter a & b Val: "<<endl;
	cin>>a>>b;
}

void Addition::CalSum(){
	cout<<"Sum = "<<a+b<<endl;
}

int main(){
	Addition obj;
	obj.getData();
	obj.CalSum();
	 
}
