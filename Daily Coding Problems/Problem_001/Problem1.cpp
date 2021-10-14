#include <iostream>
#include "Problem1.h"

using namespace std;


int main() {

	int numList[5];

	cout << "This program takes a list of numbers to see if any two equal the sum of another specificied number (k)." << endl;
	cout << "Let's enter the list of numbers first. Chose 5 numbers." << endl;

	for (int i = 0; i < 5; i++) {

		cout << "Enter number " << i + 1 << ": " << endl;
		cin >> numList[i];
	}

	int k;
	cout << "What is the specified sum (k)?" << endl;
	cin >> k;

	bool Answer = false; 
	int numA;
	int numB;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (k == numList[i] + numList[j]) {
				numA = numList[i];
				numB = numList[j];
				Answer = true;
			}
		}
	}

	if (Answer == true) {
		cout << "The answer is true! " << numA << " and " << numB << " add up to " << k << "." << endl;
	}
	else {
		cout << "There are no two numbers that equal " << k << endl;
	}

	return 0;

}


