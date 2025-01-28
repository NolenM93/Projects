
#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount() {
	accountNumber = "";
	ownerName = "";
	balance = 0.0;
}

BankAccount::BankAccount(string accnum, string owner, double bal) {
	accountNumber = accnum;
	ownerName = owner;
	balance = bal;
}

string BankAccount::GetAccountNumber() const {
	return accountNumber;
}

void BankAccount::SetAccountNumber(const string& accNum) {
	accountNumber = accNum;
}

string BankAccount::GetOwnerName() const {
	return ownerName;
}

void BankAccount::SetOwnerName(const string& owner) {
	ownerName = owner;
}

double BankAccount::GetBalance() const {
	return balance;
}

void BankAccount::SetBalance(double bal) {
	balance = bal;
}

void BankAccount::DisplayDetails() {
	cout << "Account Number: " << accountNumber << endl;
	cout << "Owner Name: " << ownerName << endl;
	cout << "Balance: " << balance << endl;
}

void BankAccount::Deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		cout << "Deposit: $" << amount << endl;
	}
	else {
		cout << "Invalid amount!" << endl;
	}
}

void BankAccount::Withdraw(double amount) {
	if (amount > 0 && amount <= balance) {
		balance -= amount;
		cout << "Withdrew: $" << amount << endl;
	}
	else {
		cout << "Invalid amount or insufficient funds!" << endl;
	}
}

double BankAccount::CheckBalance() {
	return balance;
}