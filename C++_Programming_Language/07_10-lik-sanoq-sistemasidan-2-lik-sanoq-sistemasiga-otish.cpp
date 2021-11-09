// Sana: 11 09 2021
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: kiritlgan 10 lik SS dan 2 lik SS ga otkazish

#include <iostream>

using namespace std;

int main () {

	int decNumber = 5;
	int binNumber;
	int ten = 1;

	while (decNumber >= 1) {

		binNumber += decNumber % 2 * ten;
		ten *= 10;
		decNumber /= 2;
	}

	cout << binNumber;

	return 0;
}
