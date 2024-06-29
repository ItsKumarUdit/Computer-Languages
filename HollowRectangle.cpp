#include<iostream>
using namespace std;

int main(){
	int rows, R, C;
	cout<<"Enter rows val: "<<endl;
	cin>>rows;
	 
	for(R=1; R<=rows; R++){
		for(C=1; C<=rows; C++){
			 if(R==1 || R==rows || C==1 || C==rows)
			 cout<<"* ";
			 else
			 cout<<"  ";
		}
		cout<<endl;
	}
}
