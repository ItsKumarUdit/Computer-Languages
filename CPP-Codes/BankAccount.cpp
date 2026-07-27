#include<iostream>
#include<string>
using namespace std;

class BankAccount{
	
private:
	//Data hiding
	long password;
	double balance;
	
public:
	long AccountID;
	string username;
	
	void setPassword(long pw){
		password=pw;
	}
	double getPassword(){
		return password;
	}
	
	void setBalance(long bal){
		balance=bal;
	}
	double getBalance(){
		return balance;
	}
};

int main(){
	BankAccount ba;
	ba.AccountID = 123466;
	ba.username = "Raj";
	ba.setPassword(212005);
	ba.setBalance(150.00);
	
	cout<<"Account id: "<<ba.AccountID<<endl;
	cout<<"User Name: "<<ba.username<<endl;
	cout<<"Balance: "<<ba.getBalance()<<endl;
	cout<<"Password: "<<ba.getPassword()<<endl;
}

