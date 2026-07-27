#include<iostream>
using namespace std;

int sum(int n ){
	if(n == 1) return 1;
    return n + sum(n - 1);
}

int main(){
	int n ;
	cout<<"Enter your limit: "<<endl;
	cin>>n;
    int R = sum(n);
	cout<<R<<endl;
}
