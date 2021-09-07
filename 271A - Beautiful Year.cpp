#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c, d,sum=0;
	cin >> n;
	while (sum == 0)
	{
		n++;
		a = n % 10;
		b = (n / 10) % 10;
		c = (n / 100) % 10;
		d = (n / 1000) % 10;
		if (a != b && c != d && a != c && b != c && a != d && b != d)
			sum++;
	}
	cout << n << endl;
	return 0;
}
