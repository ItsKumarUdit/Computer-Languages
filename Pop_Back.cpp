#include<iostream>
using namespace std;

//pop_back -> To delete a character at the end.

int main(){
	string str = "My name is Raj";
	cout<<str<<endl;
	str.pop_back();  //This function will run on C++11 and later versions
	cout<<str<<endl;
}
