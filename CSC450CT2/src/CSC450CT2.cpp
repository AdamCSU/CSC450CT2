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
	string firstString, secondString, combinedString;

	cout << "With only magic I will combine two strings, three times! \n" << endl;

	for(int i = 1; i <= 3; i++) {
		cout << "Loop " << i << endl;

		cout << "Please enter your first string: ";
		getline(cin, firstString);

		cout << "Please enter your second string: ";
		getline(cin, secondString);

		combinedString = firstString + secondString;

		cout << "Do you remember your strings?  Here they are magically combined! " << combinedString << endl << endl;
	}

	cout << "Thank you for coming to the show!" << endl;

	return 0;
}
