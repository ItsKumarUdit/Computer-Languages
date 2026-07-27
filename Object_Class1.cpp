#include<iostream>
using namespace std;

class Addition{
	private: //If private insn't written then bydefault it work as private
	int a, b;
	
	public : 
	void getData(){ //Inside difination
		cout<<"Enter a & b val: "<<endl;
		cin>>a>>b;
	}
	void CalSum(){
		cout<<"Sum = "<<a+b<<endl;
	}
	int get_a(){ //To access private member
		return a;
	} 
};

int main(){
	Addition obj;
	obj.getData();
	obj.CalSum();
	cout<<obj.get_a();
}
