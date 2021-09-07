#include <iostream>
using namespace std;
int F(int a)
{
	int sum = 0;
	if (a % 4 == 0 || a % 7 == 0)
		sum = 1;
	else
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
	int x, sum = 0;
	cin >> x;
	if (F(x) == 1)
		sum = 1;
	else
		for (int i = 1; i < x; i++)
			if (x % i == 0)
				if (F(i) == 1)
				{
					sum = 1;
					break;
				}
	if (sum == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
