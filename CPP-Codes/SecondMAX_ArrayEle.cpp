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
	
	int Second_max = INT_MIN;  
	for(i=0; i<size; i++){
		if(A[i] != max_Element)
		Second_max = max(Second_max, A[i]);
	}
	
	cout<<"First Max element: "<<max_Element<<endl;;
	cout<<"Second Max element: "<<Second_max<<endl;;
	
}
