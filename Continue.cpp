#include<iostream>
using namespace std;

int main(){
	int i;
	
	for(i = 1; i<= 20; i++){
		if(i==3 || i==8)
		continue;
		cout<<i<<" ";
	}
}
