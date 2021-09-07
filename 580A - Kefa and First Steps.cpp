#include <iostream>
using namespace std;
int main()
{
	int n, x, sum = 0, y = 0;
	cin >> n;
	int *a = new int[n];
	int *p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		p[i] = 0;
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= a[i + 1])
		{
			sum++;
			p[y] = sum;
		}
		else
		{
			p[y] = sum;
			y++;
			sum = 0;
		}
	}
	sum = 0;
	for (int i = 0; i < n ; i++)
		if (p[i] > sum)
			sum = p[i];
	sum++;
	cout << sum << endl;
	delete[] a;
	return 0;
}
