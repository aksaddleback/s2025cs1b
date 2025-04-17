#include "BankAccount.h"

BankAccount::BankAccount(const string& accNumber, const string& ownerName, double balance) 
    : ownerName(ownerName), balance(balance < 0 ? 0.0 : balance)
{
    this->accNumber = accNumber;
}
void BankAccount::deposit(double amount) {
    if (amount < 0) { 
        cout << "deposit amount should be positive\n";
    } else { 
        balance += amount;
        cout << "deposited $" << amount << endl; 
    }
}

bool BankAccount::withdraw(double amount) { 
    if (amount < 0) { 
        cout << "withdrawal amount should be positive.\n";
        return false; 
    } 
    if (amount <= balance) { 
        balance -= amount;
        cout << "withdrawal: $" << amount << endl; 
        return true; 
    } else { 
        cout << "Insufficient balance!\n";
        return false; 
    }
}

double BankAccount::getBalance() const { 
    return balance; 
}

void BankAccount::displayAccount() const { 
    cout << "=================\n";
    cout << "Account Number: " << accNumber << endl
         << "Account Owner:" << ownerName << endl
         << "Balance: " << balance << endl << endl; 
}