#include <iostream>
using namespace std;
int main()
{
	int n, x, sum = 0;
	cin >> n;
	x = n * 2;
	char *a = new char[x];
	for (int i = 0; i < x; i++)
		cin >> a[i];
	for (int i = 1; i < x - 1; i++)
		if (i % 2 != 0)
			if (a[i] != a[i + 1])
				sum++;
	sum = n - sum;
	cout << sum << endl;
	delete[] a;
	return 0;
}
