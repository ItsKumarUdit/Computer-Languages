#include <iostream> // Header file
#include <string> // To use String
using namespace std; // Space name

int add(int a, int b) // Function
{
    int c;
    c = a + b;
    return c;
}

class Employee // "Class" just like JAVA
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp) // Constructor
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
     
	void printDetails() // Method
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    void getSecretPassword() // Getter
    {
        cout<<"The secret password of employee is "<<this->secretPassword;
    }

private:
    int secretPassword; // Private Modifier
};


class Programmer : public Employee // Inheritance
{
    public:
        int errors;
        
};

int main()   // Main function just like C
{
    // cout<<"Hello to the World of Udit"<<endl; // cout is for printing output;
    // cout<<"Next line";
    // int a, b, c; // Variable just like C
    // short s123=9;
    // cout<<s456;

    // camelCase Notation
    // int marksInMaths=83;
    // cout<<"The marks of the student in maths is "<<marksInMaths;

    // string Name = "Udit";
    // short a;
    // int b= 89;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // score = 34.2;
    // b = 34;
    // cout<<"The score is "<<score;

    // int a, b;
    // cout<<"Enter first number"<<endl; // endl is use to switch to the next line;
    // cin>>a; // cin is for user input;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    
    // Operation:  

    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float) a / b<<endl;

    // Switch case:  

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old"<<endl;
    //     break;
    // case 18:
    //     cout << "You are 18 years old"<<endl;
    //     break;

    // default:
    //     cout << "You are neither 12 nor 18 years old";

    // }
    
    // if-else:  

    // if(age>150 || age<1)
    // {
    //     cout<<"Invalid age";
    // }

    // else if (age>=18){
    //     cout<<"You can vote";
    // }

    // else
    // {
    //    cout<<"You cannot vote";
    // }

    // int index = 0;
    // while(index<34)
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }
    
    // Loops (do-while, while & for): As same as C

    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);

    // for (int i = 1; i <= 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }
    
    // Functions: 

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<<add(a,b);
    
    // Arrays:  

    //     int arr[] = {1, 3, 6};
    // // Array Index   0  1  2
    //     // cout<<arr[1];
    //     int marks[6];

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    //     }

    // int arr2d[2][3] = {  {1,2,3},
    //                      {4,5,6}
	//                   };

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }
    
    // int to float & vice-versa:

    // int a =343;
    // float b = 87.94;
    // cout<<(float) a/34<<endl;

    // cout<<(int) b;
    
    // Strings:

    // string name = "Udit Kumar";
    // cout<<"The name is "<<name<<endl; 
    // cout<<"The length of name is "<<name.length()<<endl; // to get size;
    // cout<<"The name is "<<name.substr(1,155)<<endl; // to get sub-string
    // cout<<"The name is "<<name.substr(2,3);
    
    // Pointers:

    // float a = 34.34;
    // float* ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;
    
    // Class & objects: 

     Employee E ("Udit constructor", 344, 324432);
    // E.name = "Raj";
    // E.salary = 100;
    E.printDetails();
    E.getSecretPassword();
    // cout<<E.secretPassword;
    // cout<<"The name of our first employee is "<< E.name << " and his salary is "<<E.salary<<" Dollars"<<endl;

    return 0;
}
