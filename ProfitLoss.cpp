#include<iostream>
using namespace std;

int main(){
	float SP, CP;
	cout<<"Enter cost price: "<<endl;
	cin>>CP;
	cout<<"Enter selling price: "<<endl;
	cin>>SP;
	
	if(SP>CP)
	cout<<"User made a profit of: "<<SP-CP<<endl;
	else if(SP<CP)
	cout<<"User got a loss of: "<<CP-SP<<endl;
	else
	cout<<"SP and CP are same"<<endl;
}
