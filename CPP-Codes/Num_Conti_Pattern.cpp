#include<iostream>
using namespace std;

int main(){
	int R, C, row, col;
	cout<<"Enter row val: "<<endl;
	cin>>row;
	cout<<"Enter col val: "<<endl;
	cin>>col;
	int n=1;
	for(R=1; R<=row; R++){
		for(C=1; C<=col; C++){
			cout<<n<<" ";
			n++;
		}
		cout<<endl;
	}
}
