#include<iostream>
using namespace std;

int main(){
	int a , b, c;
	cout<<"Enter 1st number: "<<endl;
	cin>>a;
	cout<<"Enter 2nd number: "<<endl;
	cin>>b;
	cout<<"Enter 3rd number: "<<endl;
	cin>>c;
	
	if(a>b and a>c) cout<<"Greatest is "<<a<<endl;
	else if(b>a and b>c) cout<<"Greatest is "<<b<<endl;
	else cout<<"Greatest is "<<c<<endl;
}
