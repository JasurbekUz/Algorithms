// Sana: 11 09 2021
// Dasturchi: Jasurbek Shamsitdinov
// Maqsad: n - fibonacci sonini topish!

// 0   1   1   2   3   5   8   13  21  34  55
// 0   1   2   3   4   5   6   7   8   9   10

#include <iostream>

using namespace std;

int main()
{
	int fnum1 = 0, fnum2 = 1;
	int fnumN, n = 10;

	for (int i = 0; i <= n; i++) {

        fnumN = fnum1;
        fnum1 = fnum2;
        fnum2 = fnum1 + fnumN;

        cout << fnumN << "; ";
	}

	printf("\n%d - fibonacci soni %d ga teng", n, fnumN);

	return 0;
}
