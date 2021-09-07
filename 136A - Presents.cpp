#include <iostream>
using namespace std;
int main()
{
	int n, x, y;
	cin >> n;
	int *a = new int[n];
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		p[i] = i + 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i] < a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
				y = p[i];
				p[i] = p[j];
				p[j] = y;
			}
	for (int i = 0; i < n; i++)
		cout << p[i] << " ";
	delete[] a;
	delete[] p;
	return 0;
}
