#include <iostream>
#include <iomanip>
#include "banking.h";


using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;
using namespace std;


Banking::Banking() {//initialize banking variables
	NumYears = 0;
	initialInvestment = 0.0;
	monthlyDeposit = 0.0;
	interestRate = 0.0;
	interest = 0.0;
	closingBalance = 0.0;
	beginningBalance = 0;
}


void Banking::MenuNoDeposit(double initialInvestment,double monthlyDeposit, double interestRate, int numYears) {//no interest interface
	

	closingBalance = initialInvestment;//sets the running total to the initial before the loop starts
	double interestYear = 0;
	//header similar to the one in the rubric
		cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
		cout << "========================================================" << endl;
		cout << "Month       Year End Balance             Earned Interest" << endl;
		cout << "--------------------------------------------------------" << endl;
		int i;
		int k;
		for (i = 0; i < numYears; i++) {//loop for years
			interestYear = 0;//reset interest after every year cycle otherwise it adds up and puts numbers off
			for (k = 0; k < 12; k++) {//inner loop for every month

				double interest = ((closingBalance) * (interestRate / 100) / 12);//interest calculation
				interestYear = interestYear + interest;
				closingBalance = (closingBalance + interest);

			}
				std::cout << std::setw(4) << (i + 1) << fixed << setprecision(2) << setw(20) << closingBalance << setw(30) << interestYear << std::endl;
			
		}//for
		
		cout << "\n";//line to seperate the two menus

	}//nointerest
	
void Banking::MenuDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numYears){
	
	double interestYear = 0;
	double interest = 0;
	closingBalance = initialInvestment;
	//header similar to the one in the rubric
	cout << " Balance and Interest With Additional Monthly Deposits  " << endl;
	cout << "========================================================" << endl;
	cout << "Year			Year End Balance          Earned Interest" << endl;
	cout << "--------------------------------------------------------" << endl;
	int j;
	int x;
	for (j = 0; j < numYears; j++) {//loop for years
		interestYear = 0;//reset interest after every year cycle otherwise it adds up and puts numbers off
		for (x = 0; x < 12; x++) {//inner loop for every month

			interest = ((closingBalance + monthlyDeposit) * (interestRate / 100) / 12);//calculates interest with monthly deposits
			interestYear = interestYear + interest;//holds interest numbers for the year then gets reset at the end of the loop
			closingBalance = (closingBalance + monthlyDeposit + interest);//running total

		}//for
		std::cout << std::setw(4) << (j + 1) << fixed << setprecision(2) << setw(20) << closingBalance << setw(30) << interestYear << std::endl;
	}
	

	
}//interest
