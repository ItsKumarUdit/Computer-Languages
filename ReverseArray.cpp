#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of the Array: "<<endl;
	cin>>size;
	int A[size];
	
	cout<<"Enter "<<size<<" element in the Array: "<<endl;
	int i;
	for(i=0; i<size; i++){
		cin>>A[i];
	}
	int P = 0;
	int Q = size-1;
	
	while(P<Q){
		int temp = A[P];
		A[P] = A[Q];
		A[Q] = temp;
		P++;
		Q--;
	}
	for(i=0; i<size; i++){
		cout<<A[i]<<" ";
	}
}
