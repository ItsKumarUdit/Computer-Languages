#include<iostream>
#include<string> 
#include <algorithm> //to use reverse function
using namespace std;

int main(){
	string str;
	cout<<"Enter any String: "<<endl;
	getline(cin,str); 
	
	reverse(str.begin(), str.end()); 
	cout<<str;
}
