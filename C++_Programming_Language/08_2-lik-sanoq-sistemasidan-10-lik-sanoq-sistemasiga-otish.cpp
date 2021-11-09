// Sana: 11 09 2021
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: kiritlgan 2 lik SS dan 10 lik SS ga otkazish

#include <iostream>
#include <math.h>

using namespace std;

int main () {

	int binNumber = 101;
	int decNumber;
	int deg = 0;

	while (binNumber >= 1) {

		decNumber += pow(2, deg) * (binNumber % 10);
		binNumber /= 10;
		deg += 1;

	}
	cout << decNumber;

	return 0;
}
