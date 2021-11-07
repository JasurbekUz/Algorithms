// Sana: 11 07 2021
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: kiritilgan sondan boshlab dastlabki n ta tub sonlarni topish

#include <iostream>

using namespace std;

int main () {

    int number = -1;     // start
	int limit = 15;      // limit
    int counter = 0;     // count
	bool idf;

	if (limit <= 0) {

		printf("wrong number!!!");
		return 1;
	}

	if (number < 2) {

        number = 2;
	}

	while (counter < limit) {

		idf = true;

		for (int j = 2; j < number; j++) {

			if (number % j == 0) {

				idf = false;
			}
		}

		if (idf) {

			printf("%d, ", number);
			counter += 1;
		}

		number += 1;
	}

	return 0;
}
