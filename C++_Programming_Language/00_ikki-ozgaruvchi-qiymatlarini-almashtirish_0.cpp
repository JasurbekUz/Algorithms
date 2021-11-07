// Sana: 2021 11 7
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: e'on qilingan ikki o'zgaruvhilarning qiymatlarini almashtirish 1-usul

#include <iostream>

using namespace std;

int main() {

	int a = 5, b = 7;
	int c;

	cout << a << "; " << b << endl;	

	c = a;
	a = b;
	b = c;

	cout << a << "; " << b;

	
}