#include <iostream>
using namespace std;

class Account
{
	string accNo;
	double balance;

public:
	Account(string accNo);

	Account &deposit(double amount);
	Account &withdraw(double amount);

	string getAccNo() const;
	double getBalance() const;

	void display() const;
};

Account::Account(string accNo) : accNo(accNo), balance(0) {};

Account &Account::deposit(double amount)
{
	if (amount > 0)
		balance += amount;
	else
		cout << "Invalid deposit amount" << endl;

	return *this;
}

Account &Account::withdraw(double amount)
{
	if (amount <= 0)
		cout << "Invalid withdraw amount" << endl;
	else if (amount > balance)
		cout << "Insufficient balance" << endl;
	else
		balance -= amount;

	return *this;
}

string Account::getAccNo() const
{
	return accNo;
}

double Account::getBalance() const
{
	return balance;
}

void Account::display() const
{
	cout << "Account No: " << accNo << endl;
	cout << "Balance   : " << balance << endl;
}

void showAccount(Account acc)
{
	acc.display();
}
Account updateAccount(Account acc)
{
	acc.deposit(500);
	return acc;
}

int main()
{
	string accNo;
	cout << "Enter Account Number: ";
	cin >> accNo;

	Account bankAccount(accNo);

	bankAccount.deposit(1000).withdraw(200).deposit(300);

	cout << "\nAccount details (passed to function):\n";
	showAccount(bankAccount);

	bankAccount = updateAccount(bankAccount);

	cout << "\nFinal Account Details:\n";
	bankAccount.display();

	return 0;
}