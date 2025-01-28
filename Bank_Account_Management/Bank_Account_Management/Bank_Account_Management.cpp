// Bank_Account_Management.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{ 
	string accountNumber;
	string ownerName;
	double initialBalance;

	cout << "Enter accout Number: ";
	cin >> accountNumber;
	cin.ignore();

	cout << "Enter owner name: ";
	getline(cin, ownerName);

	cout << "Enter initial balance: ";
	cin >> initialBalance;

//------------------------------------------------------------------------

	BankAccount userAccount(accountNumber, ownerName, initialBalance);

	userAccount.DisplayDetails();

	int choice;
	double amount;

	do {
		cout << "\nWhat would you like to do?" << endl;
		cout << "1. Deposit Money" << endl;
		cout << "2. Withdraw money" << endl;
		cout << "3. Display account details" << endl;
		cout << "4. Check account balance" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter amount to deposit: ";
			cin >> amount;
			userAccount.Deposit(amount);
			break;
		case 2:
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			userAccount.Withdraw(amount);
			break;
		case 3:
			userAccount.DisplayDetails();
			break;
		case 4:
			cout << "Current balance: $" << userAccount.CheckBalance() << endl;
			break;
		case 5:
			cout << "Thank you! Goodbye!" << endl;
			break;

		default:
			cout << "Invalid choice. Please try again." << endl;
		}
	} while (choice != 5);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
