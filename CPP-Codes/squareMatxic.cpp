#include<iostream>
using namespace std;

int main(){
	int rows, row, col;
	cout<<"Enter rows val: "<<endl;
	cin>>rows;
	for(row=1; row<=rows; row++){
		for(col=1; col<=rows; col++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
