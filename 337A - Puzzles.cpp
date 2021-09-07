#include <iostream>
using namespace std;
int main()
{
	long long n, m, x, y, z;
	cin >> n >> m;
	int *a = new int[m];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		for (int j = i; j < m; j++)
			if (a[i] < a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	for (int i = 0; i <= m - n; i++)
	{
		y = a[i] - a[i + n - 1];
		if (y < z || i == 0)
			z = y;
	}
	cout << z << endl;
	delete[] a;
	return 0;
}
