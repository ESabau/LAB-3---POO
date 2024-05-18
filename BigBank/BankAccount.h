#pragma once
using namespace System;

ref class BankAccount abstract
{
protected:
	String ^RoutingInstructions(double amount);
public:
	BankAccount(String ^holder);
	void Credit(double amount);
	bool Debit(double amount);
	double GetBalance();
	virtual String ^ToString() override;
	virtual bool CanDebit(double amount) abstract;
private:
	String ^accountHolder;
	double balance;
};