#include <iostream>
#include <ctime>
#include <string>
#include <cassert>
#include <iostream>

/*
This program is meant to be a clock for chada tech and is meant to show a 12 and 24 hour clock that can have time added to it through hours, minutes, and seconds.
made by austin niwa
7/14/23
*/
using namespace std;

void displayMenu();
int choice = 0;
void addHour();
void addMinute();
void addSecond();
void clockChoice(int);
void displayClock();
string AMPM = "AM";;
int h = 00;
int m = 00;
int s = 00;
string addTime = "";
string twoDigit(int n);
string format24Clock(int h, int m, int s);
string format12Clock(int h, int m, int s);
int main() {
	cout << "What is the current hour of the day where you are? ";
	cin >> h;//gets hours
	cout << "What is the current minute? ";
	cin >> m;//gets minutes
	cout << "What is the current seconds? ";
	cin >> s;//gets seconds
	displayClock();
	cout << "\n";//new lines to make the program look better
	cout << "\n";
	displayMenu();
	cout << " Please input the time you would like to add to the clock. ";
	cin >> choice;//input for clockchoice switch for adding time
	clockChoice(choice);
	


}//main

string format24Clock(int h, int m, int s) {//24 hour clock
	string str;
	str = twoDigit(h) + ":" + twoDigit(m) + ":" + twoDigit(s);
	return str;


}
string format12Clock(int h, int m, int s) {//12 hour clock that adds am or pm to the end end depending on the hours
	string AMPM = " AM";
	if (h > 11)
		AMPM = " PM";
	h = h % 12;
	string str;
	str = twoDigit(h) + ":" + twoDigit(m) + ":" + twoDigit(s) + " " + AMPM;
	return str;
}

string twoDigit(int n) {//string to add a 0 to times if they are under 10 also converts time to a string as well
	if (n < 10) {
		return "0" + to_string(n);
	}
	else {
		return to_string(n);
	}

}
void displayClock() {//clock display formmatted as specified
	cout << "*****************************   ****************************" << endl;
	cout << "*      " << "12 hour clock        *   *   " << "  24 hour clock        *" << endl;
	cout << "*        ";
	cout << format12Clock(h, m, s);
	cout << "       *   *       ";
	cout << format24Clock(h, m, s);
	cout << "           *" << endl;
	cout << "*****************************   ****************************" << endl;
	cout << "\n";//new line to make it look neater
}//display

void displayMenu() {//display menu to show which commands add time and which exit the program
	cout << "***********************" << endl;
	cout << "* 1 - Add One Hour.   *" << endl;
	cout << "* 2 - Add One Minute. *" << endl;
	cout << "* 3 - Add One Second. *" << endl;
	cout << "* 4 - Exit Program.   *" << endl;
	cout << "***********************" << endl;
	cout << "\n";//new line to make it look neater
}//displaymenu


void clockChoice(int choice) {
	switch (choice)
		while (choice != 4) {
	{	
	case 1:
		addHour();//adds an hour to the clock
		displayClock();//shows current clock
		displayMenu();//shows the menu so the client knows which buttons to press
		cin >> choice;
	case 2:
		addMinute();//adds a minute to the clock
		displayClock();//shows current clock
		displayMenu();//shows the menu so the client knows which buttons to press
		cin >> choice;
	case 3:
		addSecond();//adds a second to the clock
		displayClock();//shows current clock
		displayMenu();//shows the menu so the client knows which buttons to press
		cin >> choice;
	case 4:
		cout << "this program will now end.";//ends program
		break;
	default:
		cout << "Please enter a number between 1 and 4";//prompts the user to input a correct number
		displayClock();
		displayMenu();
		cin >> choice;
		break;
		}//while
	}//switch
}//clock

void addHour() {

	if (h >= 0 && h < 22) {
		h++;
	}//if
	else if (h == 23) {
		h = 1;
		
	}//else
}//addhour
void addMinute() {
	if (m >= 0 && m < 58) {
		m++;
	}
	//if
	else if (m == 59) {
		m = 0;
		addHour();
	}//else
}//addminute
void addSecond() {
	if (s >= 0 && s < 58) {
		s++;
	}//if
	else if (s == 59) {
		s = 0;
		addMinute();
	}//else
}//addsecond
