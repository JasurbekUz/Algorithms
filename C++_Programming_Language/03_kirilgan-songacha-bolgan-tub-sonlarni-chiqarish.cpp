// Sana: 11 07 2021 /m d y
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: kirilgan songacha bolgan tub sonlarni chiqarish

#include <iostream>

using namespace std;

int main () {

	int num = 1;
	bool idf;

	if (num <= 1) {

		printf("wrong number!!!");
		return 1;
	}

	for (int i = 2; i <= num; i++) {

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
