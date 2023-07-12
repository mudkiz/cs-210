/*
 * Calculator.cpp
 *
 *  Date: 7/3/2023
 *  Author: Austin Niwa
 * This is a simple calculator app that takes two integers and performs and operation such as multiplication or division on them.
 * 
 * 
 * For the most part the syntax errors were pretty obvious like the missing brackets and the incorrect variables but then I also had to add to the program.
 * For that I went back into the lesson and looked at what I could do that wouldn't change the program significantly.
 *
 */

#include <iostream>

using namespace std;

int main()//changed void function to integer
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'Y';//changed to single quote and added semicolon
	while ((answer == 'Y') || (answer == 'y'))// did not have the correct case wouldn't call answer correctly
	{

		cout << "Enter expression" << endl;
		cin >> op1 >> operation >> op2;// had the variables reversed which prevents division from functioning correctly as it divides the wrong number by the other number
		if (operation == '+') {  //need a curly bracket for if statements or they do not function
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
		}
		else if (operation == '-') {  //need a curly bracket for if statements or they do not function, also changed to else if rather than just if
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
		}
		else if (operation == '*') {  //need a curly bracket for if statements or they do not function, also had the wrong type of operation in this section also changed to else if rather than just if
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;//missing a semicolon, wont function with incorrect syntax
		}
		else if (operation == '/') {  //need a curly bracket for if statements or they do not function, also changed to else if rather than just if
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
		}
		else if ((answer == 'n') || (answer == 'N')) { //quits program if user sends the letter N, also changed to else if rather than just if
			cout << "Program Finished." << endl;
			break;
		}
		cout << "Type Y to evaluate an expression or N to quit." << endl;// ensured the user can see the option to evaluate an expression or quit  
		cin >> answer;
	}
	return 0;//added return statement
}


