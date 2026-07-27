#include<iostream>
 
using namespace std;

int main(){
	string str;
	cout<<"Enter any String: "<<endl;
	getline(cin,str);
	int i, VowelCount = 0;
	for(i = 0; i<str.length(); i++){
		if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i]
		 == 'e' || str[i] == 'I' ||str[i] == 'i' || str[i] == 'O' ||
		 str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
		 VowelCount++;
	}  
	
	cout<<"Vowels = "<<VowelCount;
}
