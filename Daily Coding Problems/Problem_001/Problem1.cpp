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

	cout << "The list includes: " << numList[0] << ", " << numList[1] << ", " << numList[2] << ", " << numList[3] << ", " << numList[4] << ". " << endl;
	cout << "Number k is: " << k << endl;

	return 0;

}


