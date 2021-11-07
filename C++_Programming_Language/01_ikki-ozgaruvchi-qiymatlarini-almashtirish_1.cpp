// Sana: 2021 11 07
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: e'on qilingan ikki o'zgaruvhilarning qiymatlarini almashtirish 2-usul

#include <iostream>

using namespace std;

int main() {

	int a = 5, b = 7;
	
	cout << a << "; " << b << endl;	

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << "; " << b;

	
}
