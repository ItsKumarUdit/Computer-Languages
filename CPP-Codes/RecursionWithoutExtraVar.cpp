#include<iostream>
using namespace std;

void Print(int n){
	if(n == 0) return;
	Print(n-1);
	cout<<n<<endl; //Work after call
	 
}

int main(){
	int n  ;
	cout<<"Enter your limit: "<<endl;
	cin>>n;
	Print(n);
}
