#include<iostream>
using namespace std;

int main(){
	int rows, R, C;
	cout<<"Enter rows val: "<<endl;
	cin>>rows;
	int mid = rows/2+1;
	for(R=1; R<=rows; R++){
		for(C=1; C<=rows; C++){
			if(R==mid || C==mid)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}
