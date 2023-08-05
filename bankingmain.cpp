/*
* Austin Niwa
* 7/30/23
* Banking project 2
* this program will calculate deposits and interest from given numbers
*/
#include <iostream>
#include <string>
#include "banking.h";


using namespace std;

int getInteger(int, string);
double getDouble(int, string);


int main() {
	/*
	doubles set for deposits, interest rates and years
	*/

	Banking airgead;
	int numYears = 0;
	double
		initialInvestment = 0.0,
		beginningBalance = 0.0,
		monthlyDeposit = 0.0,
		interestRate = 0.0;

	//inputs
	initialInvestment = getDouble(0, "what is the initial deposit in dollars? ");
	airgead.setInitialInvestment(initialInvestment);
	monthlyDeposit = getDouble(0, "How much would you like to deposit per month also in dollars? ");
	airgead.setMonthlyDeposit(monthlyDeposit);
	interestRate = getDouble(1, "How much interest in a percentage? ");
	airgead.setInterestRate(interestRate);
	numYears = getInteger(1, "How many years would you like to keep your deposit in? ");
	airgead.setNumYears(numYears);
	//calls to the outputs on banking.cpp 
	airgead.MenuNoDeposit(initialInvestment, monthlyDeposit, interestRate, numYears);

	airgead.MenuDeposit(initialInvestment, monthlyDeposit, interestRate, numYears);

}//main

//setters and getters
void Banking::setInitialInvestment(double initialInvestment) {
	this->initialInvestment = initialInvestment;
	this->beginningBalance = initialInvestment;
}//set initial investment
void Banking::setMonthlyDeposit(double monthlyDeposit) {
	this->monthlyDeposit = monthlyDeposit;
}//monthly deposit
void Banking::setInterestRate(double interestRate) {
	this->interestRate = interestRate;
}//set interest rate
void Banking::setNumYears(int numYears) {
	this->NumYears = numYears;
}//set numyears
int Banking::getNumYears() {
	return NumYears;
}//get numyears
double Banking::getInitialInvestment() {
	return initialInvestment;
}//get initialinvestment
double Banking::getMonthlyDeposit() {
	return monthlyDeposit;
}//get monthlydeposit
double Banking::getInterestRate() {
	return interestRate;
}//get interest rate



int getInteger(int lowest,string prompt)
{//the purpose of get integer is to check input validation and make sure the user knows that the number is incorrect
	int number = 0;
	bool needData = true;
	do {
		cout << prompt << lowest << " ";
		cin >> number;
		needData = (number < lowest);
		if (needData){
			cout << "That number is invalid, your number must be greater than or equal to " << (lowest) << endl;

		}//if
	} while (needData);//do
	return number;
}//get integer

double getDouble(int lowest,string prompt)
{//the purpose of get integer is to check input validation and make sure the user knows that the number is incorrect
	double number = 0;
	bool needData = true;
	do {
		cout << prompt << (lowest) << " ";
		cin >> number;
		needData = (number < lowest);
		if (needData) {
			cout << "That number is invalid, your number must be greater than or equal to " << (lowest) << endl;

		}//if
	} while (needData);//do
	return number;
}//get integer