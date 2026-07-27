#include<iostream>
using namespace std;

int main(){
	int rows, R, C;
	cout<<"Enter rows val: "<<endl;
	cin>>rows;
	 
	for(R=1; R<=rows; R++){
		for(C=1; C<=rows-R; C++){
			   cout<<"  ";
		
			   for(C=1; C<=R; C++){
			   cout<<"* ";
		}
		 
	}
	cout<<endl;
}
}
