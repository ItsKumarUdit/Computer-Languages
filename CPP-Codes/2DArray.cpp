#include<iostream>
using namespace std;

int main(){
	int row, col;
	cout<<"Enter row size: "<<endl;
	cin>>row;
	cout<<"Enter col size: "<<endl;
	cin>>col;
	int A[row][col];
	cout<<"Enter "<<row*col<<" element in the 2D Array: "<<endl;
	int i, j;
	for(i=0; i<row; i++){
		for(j = 0; j < col; j++){
			cin>>A[i][j];
		}
	}
	
	for(i=0; i<row; i++){
		for(j = 0; j < col; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}
