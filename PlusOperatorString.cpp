#include<iostream>
using namespace std;
 

int main(){
	string str1 = "Maha";
    string str2 = "raj";
    //Method 1
    cout<<str1+str2<<endl; //Maharaj will print
    //Method2
    str1 = str1 + "raj";
    cout<<str1<<endl;  //Maharaj will print
}
