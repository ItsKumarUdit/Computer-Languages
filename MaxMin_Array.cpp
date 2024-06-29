#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of the array: "<<endl;
	cin>>size;
	int A[size];
	
	cout<<"Enter "<<size<<" elements in the array: "<<endl;
	int i;
	for(i=0; i<size; i++){
		cin>>A[i];
	}
	int max_Element = INT_MIN; //Smallest interger number in Prog.language
	for(i=0; i<size; i++){
		max_Element = max(max_Element, A[i]);
	}
	int min_Element = INT_MAX; //Largest interger number in Prog.language
	for(i=0; i<size; i++){
		min_Element = min(min_Element, A[i]);
	}
	cout<<"Max Element = "<<max_Element<<endl;
	cout<<"Min Element = "<<min_Element<<endl;
}
