#include<iostream>
using namespace std;

int sumofn(int n, int sum){
	if(n == 0)
	return sum;
	cout<<n<<endl;
	sum += n;
	sumofn(n-1, sum);
}

int main(){
	int n ;
	cout<<"Enter your limit: "<<endl;
	cin>>n;
	int sum = 0;
	int R = sumofn(n, sum);
	cout<<R<<endl;
}
