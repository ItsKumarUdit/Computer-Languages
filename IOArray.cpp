#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of the Array: "<<endl;
	cin>>size;
	int A[size];
	cout<<"Enter "<<size<<" elements in the Array: "<<endl;
	int i;
	for(i=0; i<size; i++){
		cin>>A[i];
	}
	
	for(i=0; i<size; i++){
		cout<<A[i]<<" ";
	}
} 
