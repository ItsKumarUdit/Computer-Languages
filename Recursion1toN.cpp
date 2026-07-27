#include<iostream>
using namespace std;

void Print(int n, int x){
	if(n > x) return;
	cout<<n<<endl;
	Print(n+1, x);
}

int main(){
	int n = 1, x;
	cout<<"Enter your limit: "<<endl;
	cin>>x;
	Print(n,x);
}
