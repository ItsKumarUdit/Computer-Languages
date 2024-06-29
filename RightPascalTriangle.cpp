#include<iostream>
using namespace std;

int fact(int n){
	int i, factorial = 1;
	for(i = 1; i <= n; i++){
		factorial *= i;
	}
	return factorial;
}

int combination(int n, int r){
	 
	return (fact(n)/(fact(r)*fact(n-r)));
	
}

int main(){
	int R, C, rows;
	cout<<"Enter rows Val: "<<endl;
	cin>>rows;
	
	for(R = 0; R <= rows; R++){
		for(C = 0; C <= R; C++){
			cout<<combination(R,C)<<" ";
		}
		cout<<endl;
	}
}
