#include<iostream>
using namespace std;

int main(){
	int n, r, a, b, c, i;
	cout<<"Enter n val: "<<endl;
	cin>>n;
	cout<<"Enter r val: "<<endl;
	cin>>r;
	a = 1;
	for(i=1; i<=n; i++){
		a *= i;
	}
 
	b = 1;
	for(i=1; i<=r; i++){
		b *= i;
	}
 
	c = 1;
	for(i=1; i<=n-r; i++){
		c *= i;
	}
	 
	
	cout<<a/(b*c);
}
