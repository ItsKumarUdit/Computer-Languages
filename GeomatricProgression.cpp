#include<iostream>
using namespace std;

int main(){
	int i, n;
	cin>>n;
	int a = 1;
	//1 2 4 8 16 32 64......
	for(i = 1; i <= n; i++){
		cout<<a<<" ";
		a*=2;
	}
	
}
