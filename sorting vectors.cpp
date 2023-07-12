#include <iostream>
#include <vector>
#include <algorithm>
// This program puts numbers int oa vector and sorts them in descending order
//Austin Niwa
//7/12/2023
using namespace std;
int vecInput = 0;
int vecLength = 0;
int i = 0;
vector<int>v;

void SortVector(vector<int>& myVec)
{
	sort(myVec.begin(), myVec.end(), greater<int>());//sorts in descending order
	for (auto num : myVec) {
		cout << num << ",";
	}//for loop
	cout << '\n';//I wasnt sure how to get rid of the int that shows how many numbers there are
	//I thought to use \n to clear the line and it worked so im cool with that
	//its not in the loop as it only needs to be at the end of the input

}//sort vector
int main() {//main gets the input for the vector
	//cout << "Please input the amount of numbers you would like to be sorted in descending order.";
	cin >> vecLength;//get the number that will determine the length of the vector
	for (int i = 0; i < vecLength; i++) {
		//cout << "Please input the numbers you would like sorted in descending order.";
		cin >> vecInput;//gets the input for the vector
		v.push_back(vecInput);


	}//for loop
	SortVector(v);//calls the sortvector function from before main
}//main


