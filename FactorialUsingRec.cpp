#include<iostream>
using namespace std;

int fact(int n ){
	if(n == 1) return 1;
    return n * fact(n - 1);
}

int main(){
	int n ;
	cout<<"Enter your limit: "<<endl;
	cin>>n;
    int R = fact(n);
	cout<<R<<endl;
}
