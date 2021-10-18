#include <iostream>

using namespace std;

int main() {

	cout << "Enter two numbers." << endl;

	cout << "Enter the first number: " << endl;
	int numA;
	cin >> numA;

	cout << "Enter the second number: " << endl;
	int numB;
	cin >> numB;

	int Total = numA + numB;

	cout << "The sum of these two numbers is " << Total << endl;

	return 0;
}