#include <iostream>
using namespace std;
int main()
{
	int n, a = 0, b = 0, c = 0, d = 0;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = 0; i < n; i++)
		if (p[i] == 1)
			a++;
		else if (p[i] == 2)
			b++;
		else if (p[i] == 3)
			c++;
		else
			d++;
	while (a != 0 && c != 0)
	{
		c--;
		a--;
		d++;
	}
	while (b > 0 && a > 1)
	{
		a -= 2;
		b--;
		d++;
	}
	while (b > 0 && a == 1)
	{
		a--;
		b--;
		d++;
	}
	if (a == 0 && c != 0)
		d += c;
	if (b >= 2)
	{
		d += b / 2;
		b = b % 2;
	}
	else if (b < 2 && b != 0)
		d++;
	if (a >= 4)
	{
		d += a / 4;
		a = a % 4;
	}
	else if (a < 4 && a != 0)
		d++;
	cout << d << endl;
	delete[] p;
	return 0;
}
