#include<iostream>
using namespace std;

class Sum{
	public:
	int a, b, c;
	
	void Add(int a, int b){
		cout<<"A + B = "<<a+b<<endl;
	}
	void Add(int a, int b, int c){
		cout<<"A + B + C = "<<a+b+c<<endl;
	}
	
	
};

int main(){
	int a, b, c;
	cout<<"Enter any three numbers: "<<endl;
	cin>>a>>b>>c;
	Sum S1;
	S1.Add(a,b);
	S1.Add(a,b,c);
}
