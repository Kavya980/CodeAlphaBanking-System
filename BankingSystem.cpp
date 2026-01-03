#include<fstream>
#include<iostream>
#include<windows.h>
#include<sstream>
using namespace std;

class Account{
private:
string AccountNo,Password;
int Balance;

public:
Account():AccountNo(""),Password(""),Balance(0){}

void setAccountNo(string id){
AccountNo=id;
};

void setPassword(string pw){
Password=pw;
};

void setBalance(int bal){
Balance=bal;
};

void deposit(int amount) {
        Balance += amount;
    }

bool withdraw(int amount) {
    if (amount <= Balance) {
      Balance -= amount;
        return true;
        }
        return false;
    }  

string getAccountNo(){
    return AccountNo;
}

string getPassword(){
    return Password;
}

int getBalance(){
    return Balance;
}
};

class Customer {
private:
    string name;
    Account account;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    Account& getAccount() {
        return account;
    }
};

void openAccount(Customer &customer){
system("cls");
string id,pw,name;

cout << "Enter Customer Name: ";
cin>>name;
customer.setName(name);

cout<<"\tEnter Account No.: ";
cin>>id;
customer.getAccount().setAccountNo(id);

cout<<"\tEnter a Strong Password: ";
cin>>pw;
customer.getAccount().setPassword(pw);

customer.getAccount().setBalance(0);

cout<<"\nAccount created successfully!";
Sleep(5000);
}

int main(){
Customer customer;

bool exit=false;
while(!exit){
    system("cls");
    int val;
    cout<<"\tWelcome To Bank Account Management System"<<endl;
    cout<<"\t********************************************"<<endl;
    cout<<"\t1.Open New Account"<<endl;
    cout<<"\t2.Deposit Cash"<<endl;
    cout<<"\t3.Withdraw Cash"<<endl;
    cout<<"\t4.Exit"<<endl;
    cout<<"\tEnter Your Choice: ";
    cin>>val;

    if(val==1){
     openAccount(customer);
    }
    Sleep(3000);
}
}

class Transaction{

};