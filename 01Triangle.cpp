#include<iostream>
using namespace std;

int main(){
	int rows, R, C;
	cout<<"Enter rows size: "<<endl;
	cin>>rows;
 
	for(R=1; R<=rows; R++){
		 for(C=1; C<=R; C++){
		 	if((R+C)%2==0)
			cout<<"1 ";
			else
			cout<<"0 ";
		}
		cout<<endl;
	}
}
