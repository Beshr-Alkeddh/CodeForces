#include <iostream>
using namespace std;
int main()
{
	long long n, x;
	cin >> n;
	if (n % 2 == 0)
		x = n / 2;
	else
		x = (n / 2) - n;
	cout << x << endl;
	return 0;
}
