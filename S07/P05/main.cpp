#include<iostream>
#include "BankAccount.h"
using namespace std; 

int main() { 
    BankAccount account("A00001", "John", 100);
    account.displayAccount(); 
    account.deposit(-100);
    account.displayAccount();
    account.deposit(500);
    account.displayAccount();
    account.withdraw(-100);
    account.displayAccount();
    account.withdraw(300); 
    account.displayAccount();
    account.withdraw(500);
    account.displayAccount();
}