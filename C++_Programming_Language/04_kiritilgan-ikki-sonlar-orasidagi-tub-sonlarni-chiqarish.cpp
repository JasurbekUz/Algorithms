// Sana: 11 07 2021
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: kiritilgan ikki sonlar orasidagi tub sonlarni chiqarish

#include <iostream>

using namespace std;

int main () {

	int fNumber = 1, sNumber = 108;
	bool idf;

	if (fNumber > sNumber) {

		printf("wrong number ... !!!");

		return 1;

	} else if (fNumber < 2) {

		fNumber = 2;
	}

	for (int i = fNumber; i <= sNumber; i++) {

		idf = true;

		for (int j = 2; j < i; j++) {

			if (i % j == 0) {

				idf = false;

				continue;
			}

		}

		if (idf) {

			printf("%d, ", i);
		}

	}

	return 0;
}
