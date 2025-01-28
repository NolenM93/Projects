#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount {
private:
	std::string accountNumber;
	std::string ownerName;
	double balance;

public:
	BankAccount();

	BankAccount(std::string accNum, std::string owner, double bal);

	std::string GetAccountNumber() const;

	void SetAccountNumber(const std::string& accNum);

	std::string GetOwnerName() const;

	void SetOwnerName(const std::string& owner);

	double GetBalance() const;

	void SetBalance(double bal);

	void DisplayDetails();

	void Deposit(double amount);

	void Withdraw(double amount);

	double CheckBalance();


};

#endif