// Sana: 2021 11 7
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: kiritilgan son tub yoki tub emasligini aniqlash

#include <iostream>

using namespace std;

int main() {

	int number = 7;
	bool idf = true;

	if (number <= 1 ) {

		idf = false;
	}

	for (int i = 2; i < number; i++) {

		if (number % i == 0) {

			idf = false;
			break;
		}
	}

	if (idf) {

		printf("number %d is prime", number);
		return 0;
	}

	printf("number %d is not prime", number);
}