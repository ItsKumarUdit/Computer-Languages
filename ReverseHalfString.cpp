#include<iostream>
#include<string> 
#include <algorithm> //to use reverse function
using namespace std;

int main(){
	string str;
	cout<<"Enter any String: "<<endl;
	getline(cin,str); 
	int n = str.length()/2;
	reverse(str.begin(), str.begin()+n); 
	cout<<str;
}
