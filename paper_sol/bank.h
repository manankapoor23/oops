#ifndef BANK_H
#define BANK_H
#include <string>
#include <iostream>
using namespace std;

class BankAccount{
    private:
    string accNum;
    double balance;

    public:
    BankAccount(string accountNumber , double accountBalance){
        accNum=accountNumber;
        balance=accountBalance;
    }

    // method to get the balance 
    double getBalance() const { // we make it const so that it doesnt change the balance 
        return balance;
    }
    
    // method to deposit money 
    void depositMoney(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited amount : "<<amount<<endl;
            cout<<"Balance New : "<<balance<<endl;
        }

        
        else{
            cout<<"Invalid deposit amout";

        }
    }

    void withdraw(double amount){
        if(amount>0 && amount <=balance){
            balance-= amount ;
            cout<<"the balance is : "<<balance<<endl;
        }
        else{
            cout<<"invalid amount";
        }
    }
};

#endif