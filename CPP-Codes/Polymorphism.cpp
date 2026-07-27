#include<iostream>
using namespace std;

class Add{
	public:
		int a, b, c;
		
		Add(int a, int b){
			this->a = a;
			this->b = b;
			int sum = 0;
			sum = a + b;
			cout<<"Sum of a & b : "<<sum<<endl;  //Output = 30
		}
		Add(int a, int b, int c){
			this->a = a;
			this->b = b;
			this->c = c;
			int sum = 0;
			sum = a + b + c;
			cout<<"Sum of a, b & c : "<<sum<<endl; //Output = 60
		}
		Add(float a, int b, int c){
			float sum = 0;
			sum = a + b + c;
			cout<<"Sum of a, b & c : "<<sum<<endl; //Output = 61
		}
};

int main(){
	Add A1(10,20);
	Add A2(10,20,30);
	Add A3(11,20,30);
}
