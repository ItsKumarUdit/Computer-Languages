#include<iostream>
using namespace std;

int main(){
	int rows, R, C;
	cout<<"Enter rows size: "<<endl;
	cin>>rows;
 
	for(R=1; R<=rows; R++){
		 for(C=1; C<=(rows+1)-R; C++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
