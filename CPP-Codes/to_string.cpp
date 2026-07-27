#include <iostream>
#include <string> 
#include <algorithm> 
using namespace std;

//to_string() -> Used to convert integers into String form 

int main() {
    int x = 123;
    string str = to_string(x); //This function will run on C++11 and later versions
    
    cout << str;
    return 0;   
}

