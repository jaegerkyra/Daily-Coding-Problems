#include <iostream>

using namespace std;


int main() {


	cout << "This program will check if a number is a Palindrome." << endl;
	cout << "Enter a number to be checked: ";

	int n, num, digit, rev = 0;

	cin >> num; // If 121 is entered
	n = num;

	while (num != 0) {
		digit = num % 10; // digit = 121 % 10 = 1
		rev = (rev * 10) + digit; // rev = (0 * 10) + 1 = 1
		num = num / 10; // 121 / 10 = 12

		// Then it will loop again and num at the end will be 1. Then it will loop another time and get 0.
	}

	if (n == rev) {
		cout << "The number is a palindrome." << endl;
	}
	else {
		cout << "The number is not a palindrome." << endl;
	}
	
	return 0;
}