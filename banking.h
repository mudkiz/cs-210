#pragma once

#ifndef banking_h
#define banking_h

#include <iostream>
#include <string>
using namespace std;

class Banking {//banking class set

private:
	int NumYears;
	double
		initialInvestment,
		monthlyDeposit,
		interestRate,
		beginningBalance,
		interest,
		closingBalance;

public:
	Banking();
	//setters
	void setInitialInvestment(double initialInvestment);
	void setNumYears(int numYears);
	void setMonthlyDeposit(double monthlyDeposit);
	void setInterestRate(double interestRate);
	//getters
	int getNumYears();
	double getInitialInvestment();
	double getMonthlyDeposit();
	double getInterestRate();
	
	void MenuNoDeposit(double initialInvestment, double monthlyDeposit, double interest, int numYears);
	
	void MenuDeposit(double initialInvestment, double monthlyDeposit, double interest, int numYears);

};

#endif