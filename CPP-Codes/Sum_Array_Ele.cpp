#include<iostream>
using namespace std;

int main(){
	int size, sum = 0;
	cout<<"Enter size of the Array: "<<endl;
	cin>>size;
	int A[size];
	cout<<"Enter "<<size<<" elements in the Array: "<<endl;
	int i;
	for(i=0; i<sizeof(A)/4; i++){
		cin>>A[i];
	}
	
	for(i=0; i<sizeof(A)/4; i++){
		 sum += A[i];
	}
	cout<<"Sum = "<<sum;
} 
