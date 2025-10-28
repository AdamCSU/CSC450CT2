//============================================================================
// Name        : CSC450CT2.cpp
// Author      : Adam Gorry
// Version     :
// Copyright   : Your copyright notice
// Description : CSC450 Critical Thinking 2
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstString, secondString, combinedString;  //Variables to hold user input and combined result

	cout << "With only magic I will combine two strings, three times! \n" << endl;

	for(int i = 1; i <= 3; i++) {  //Loop to get user input 3 times
		cout << "Loop " << i << endl;  //Print which loop we're on

		cout << "Please enter your first string: ";  //Get and store first string
		getline(cin, firstString);

		cout << "Please enter your second string: ";  //Get and store second string
		getline(cin, secondString);

		combinedString = firstString + secondString;  //Combine two strings and store it

		cout << "Do you remember your strings?  Here they are magically combined! " << combinedString << endl << endl;  //Print result to console
	}

	cout << "Thank you for coming to the show!" << endl;

	return 0;  //End program
}
