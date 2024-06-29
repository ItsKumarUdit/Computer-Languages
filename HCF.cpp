#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number: "<<endl;
	cin>>num;
	int i ;
	for(i=num/2; i>=1; i--){
		if(num % i == 0)
		 cout<<i<<endl;
		 break;
	}
	 
}
