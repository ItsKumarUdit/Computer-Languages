#include<iostream>
using namespace std;

int main(){
	int key = 9, flag = 1; //Fixed value
	long Password = 112131;
	long Entered_Password, Update, InputKey, NewPassword;
	char choice;
	do{
	cout<<"Enter 6-digit numberic password: "<<endl;
	cin>>Entered_Password;
	if(Entered_Password == Password)
	  cout<<"Password matched, File opening..."<<endl;
	else{
	  cout<<"Incorrect Password..."<<endl;	
	  cout<<"Enter 1 to update your password else try after some time: "<<endl;
	  cin>>Update;
	  if(Update == 1){
	  	cout<<"Enter Security key for varification: "<<endl;
	  	if(InputKey == key){
	  		cout<<"Enter New Password: "<<endl;
	  		cin>>Password;
	  		cout<<"\nPassword Updated Successfully"<<endl;
		  }
		  else{
		  	cout<<"Security key is incorrect"<<endl;
		  }
	  }
	}
	cout<<"Press Y/y key to check password again: "<<endl;
	cin>>choice;
   } while(choice == 'Y' || choice == 'y');
}
