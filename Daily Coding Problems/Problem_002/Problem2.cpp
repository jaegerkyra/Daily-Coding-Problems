#include <iostream>

using namespace std;

int main() {

	int numList[5];

	cout << "Enter 5 numbers" << endl;

	for (int i = 0; i < 5; i++) {

		cout << "Enter number " << i + 1 << ": " << endl;
		cin >> numList[i];
	}

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			numList[i] = numlist[j]
				//stumped...
		}
		
	}*/

	return 0;

}