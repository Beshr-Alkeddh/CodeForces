#include <iostream>
using namespace std;
int main()
{
	long long n, m, x;
	cin >> n >> m;
	if (n % 2 == 0)
	{
		if (m <= n / 2)
			x = 2 * m - 1;
		else
			x = 2 * (m - n / 2);
	}
	else
	{
		if (m <= (n + 1) / 2)
			x = 2 * m - 1;
		else
			x = 2 * (m - (n + 1) / 2);
	}
	cout << x << endl;
	return 0;
}
