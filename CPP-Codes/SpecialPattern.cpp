#include<iostream>
using namespace std;

int main(){
	int rows, R, C;
	cout<<"Enter rows size: "<<endl;
	cin>>rows;
 
	for(R=1; R<=rows; R++){
		 for(C=1; C<=R; C++){
		 	if(R%2==0)
			cout<<(char)(C+64)<<" ";
			else
			cout<<C<<" ";
		}
		cout<<endl;
	}
}
