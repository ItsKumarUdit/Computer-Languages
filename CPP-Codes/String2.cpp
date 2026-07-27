#include<iostream>
 
using namespace std;

int main(){
	string str;
	cout<<"Enter any String: "<<endl;
	//(cin>>str)->  it will read only one word;
	getline(cin,str); //-> it will read full line
	
	cout<<str;
}
