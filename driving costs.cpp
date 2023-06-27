#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;
// this program is made to calculate the gas cost at 20 miles, 75 miles, and 500 miles. 
// made by austin niwa.
int main() {

double gasCost20; //gas cost for 20 miles
double gasCost75;// gas cost for 75 miles
double gasCost500;//gas cost for 500 miles
double dollars = 0.0;//set doubles
double miles = 0.0;


cin >> miles;//get input
cin >> dollars;

gasCost20 = (20 * dollars) / miles;//calculations for gas costs
gasCost75 = (75 *  dollars) / miles;
gasCost500 = (500 *  dollars) /  miles;


cout << fixed << setprecision(2);// set precision so the costs are rounded to 2 digits.
cout << gasCost20 << " ";//print
cout << gasCost75 << " ";
cout << gasCost500 << endl;//endl since its better to use than /n as it flushes input as well.

   return 0;
}