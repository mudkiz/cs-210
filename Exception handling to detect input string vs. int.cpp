#include <string>
#include <iostream>
// this program is designed to fail and throw and exception then be caught with a try/catch then print
//until the inputName variable is a -1 and break.
//I had a bit of trouble figuring out where to put my if statement here but after some tinkering realized 
//I just needed to put it under the catch with the print being under that. I set the age to -1 because 
//otherwise it would go up to 1 if the exception occurs making the output incorrect.
//Austin Niwa
//8/6/23
//SNHU
using namespace std;

int main() {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);
   while(inputName != "-1"){
      try{
      cin >> inputName;//inputs go in the try loop
      cin >> age;
      }//try
      catch(ios::failure){//catch for when the exception occurs
      age = -1;//sets age to -1 if the exception occurs so it will be 0 upon printing
         cin.clear();
     cin.ignore(100, '\n');
   }//catch
   if (inputName =="-1"){//breaks loop if inputName is -1 before the block so it does not print 
      break;
   }
cout << inputName << " " << (age + 1)<< endl;//print after if statement so it will not print if input is -1
   }//while
 
   return 0;
}//main