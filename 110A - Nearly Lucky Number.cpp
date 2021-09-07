#include <iostream>
using namespace std;
int F(int a)
{
	int sum = 0;
	while (a > 0)
	{
		if (a % 10 == 4 || a % 10 == 7)
		{
			sum = 1;
			a /= 10;
		}
		else
		{
			sum = 0;
			break;
		}
	}
	return sum;
}
int main()
{
	long long n, m = 0;
	cin >> n;
	while (n > 0)
	{
		if (n % 10 == 4 || n % 10 == 7)
			m++;
		n /= 10;
	}
	if (F(m) == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
